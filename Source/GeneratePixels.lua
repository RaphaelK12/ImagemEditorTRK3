dofile("Tabelas.lua")
require("lfs")

--~ lfs.rmdir ("VectorStructs")

lfs.mkdir ("Imagem_003/Generated/")
lfs.mkdir ("Imagem_003/Generated/pixels/")

-- {t="r_8u"           ,f="DF_L_8u"           ,v="+128"       ,v2="-128"       ,p=1,b={8}              ,s="	uchar r;" },

function print_info()
-- print_("#pragma once\n\n")
print_([[		case imDF::DF_NONE:     			spp = 0    						; bpp = 0    							; chanels = 0;      				hasAlpha = 0;      				glDataFormat = imDF::DF_NONE;       	glInternalFormat = imGLIFormat::GL_IFORMAT_NONE;      			glFormat = imGLFormat::GL_FORMAT_NONE;      					glType = imGLType::GL_NONE;        						break;]])
print_([[		case imDF::DF_INDEX:     			spp = 1    						; bpp = 8								; chanels = 1;      				hasAlpha = 0;      				glDataFormat = imDF::DF_BGR_8u;       	glInternalFormat = imGLIFormat::GL_IFORMAT_NONE;      			glFormat = imGLFormat::GL_FORMAT_NONE;      					glType = imGLType::GL_NONE;        						break;]])

	for k,v in pairs(t) do
		if v.i then a= "		" else a = "		//" end

		print_(a .. string.format("case imDF::%s:     			spp = sizeof(%s)    			; bpp = 8*sizeof(%s)        			; chanels = %s;      				hasAlpha = %s;"..
		"      				glDataFormat = imDF::%s;       	glInternalFormat = imGLIFormat::%s;      			glFormat = imGLFormat::%s;      					glType = imGLType::%s;        						break;",
		v.f, v.t, v.t, tostring(#v.b), tostring(v.alpha), v.glf, v.glsif, v.glfm, v.GLType))
	end
end

function print_c() -- print convertDataFormat
	-- print_(header6)
	for k,ftype in pairs(t) do
	if ftype.i == true then
		print_("		case imDF::"..ftype.f..":")
		print_("			switch(tf){")
		for i,totype in pairs(t) do
			if totype.i == true then
			if ftype ~= totype then
				print_("				case imDF::"..totype.f..": 	return convert((".. ftype.t .."*) f, (".. totype.t .. "**) t, numPixels, datasize, spp, bpp);")
			end
			-- print_("					break;")
			-- print_("				}")
		end
		end
		print_("				default: return 0;")
		print_("			};")
	end
	end
	-- print_("		default: return 0;")
	-- print_("	};")
	-- print_("};")
	-- print_(" ")
end

function print_f() -- print structs function
	for k,v in pairs(t) do
	if v.i == true then

		_G.h = io.open("Imagem_003/Generated/pixels/"..v.t..".cpp" ,"w")
		print_("\n")
		-- print_(header3)
		for i,j in pairs(t) do
		if j.i == true then
			print_(v.t .. "&" .. v.t .. "::operator=(const " .. j.t .. "			&v){")
			n1 = #v.b
			n2 = #j.b

			x = ""
			y = ""
			z = ""
			if v.p ~= 2 and j.p == 2 and v.v ~= "" then
				x = v.v
			elseif v.p == 2 and j.p ~= 2 and v.v ~= "" then
				x = v.v
			elseif v.p == 2 and j.p ~= 2 or v.p ~= 2 and j.p == 2 then
				y = "("
				z = j.v2 .. ")"
			end
			if v.p == 4 and j.p ~= 4 then
				y = y
				z = z
			elseif v.p ~= 4 and j.p == 4 then
				y = "half2float("
				z = ")"
			end

			-- special cases
			-- "rgb_9995f";
			-- "bgr_5999f";
			-- "rgb_11_11_10f";
			-- "bgr_10_11_11f";
			if false then
				break
			elseif v.t == "rgb_9995f" and j.t == "rgb_11_11_10f" then
				print_("	*this = pack_9995f(unpack_11_11_10f(v));")

			elseif v.t == "bgr_5999f" and j.t == "rgb_11_11_10f" then
				print_("	*this = pack_9995f(unpack_11_11_10f(v));")

			elseif v.t == "rgb_9995f" and j.t == "bgr_10_11_11f" then
				print_("	rgb_11_11_10f tmp;")
				print_("	tmp = v;")
				print_("	*this = pack_9995f(unpack_11_11_10f(tmp));")

			elseif v.t == "bgr_5999f" and j.t == "bgr_10_11_11f" then
				print_("	rgb_11_11_10f tmp;")
				print_("	tmp = v;")
				print_("	*this = pack_9995f(unpack_11_11_10f(tmp));")

			elseif v.t == "rgb_11_11_10f" and j.t == "rgb_9995f" then
				print_("	*this = pack_11_11_10f(unpack_9995f(v));")

			elseif v.t == "rgb_11_11_10f" and j.t == "bgr_5999f" then
				print_("	rgb_9995f tmp;")
				print_("	tmp = v;")
				print_("	*this = pack_11_11_10f(unpack_9995f(tmp));")

			elseif v.t == "bgr_10_11_11f" and j.t == "rgb_9995f" then
				-- print_("	rgb_32f tmp;")
				-- print_("	tmp = v;")
				print_("	*this = pack_11_11_10f(unpack_9995f(v));")

			elseif v.t == "bgr_10_11_11f" and j.t == "bgr_5999f" then
				print_("	rgb_32f tmp;")
				print_("	tmp = v;")
				print_("	*this = tmp;")
-- 				print_("	*this = pack_11_11_10f(unpack_9995f(v));")


			elseif j.t == "rgb_9995f" and v.t ~= "rgb_9995f" and v.t ~= "bgr_5999f" and v.t ~= "rgb_11_11_10f" and v.t ~= "bgr_10_11_11f" then
				print_("	*this = unpack_9995f(v);")

			elseif j.t == "bgr_5999f"  and v.t ~= "rgb_9995f" and v.t ~= "bgr_5999f" and v.t ~= "rgb_11_11_10f" and v.t ~= "bgr_10_11_11f" then
				print_("	rgb_9995f tmp;")
				print_("	tmp = v;")
				print_("	*this = unpack_9995f(tmp);")

			elseif j.t == "rgb_11_11_10f"  and v.t ~= "rgb_9995f" and v.t ~= "bgr_5999f" and v.t ~= "rgb_11_11_10f" and v.t ~= "bgr_10_11_11f" then
				print_("	*this = unpack_11_11_10f(v);")

			elseif j.t == "bgr_10_11_11f"  and v.t ~= "rgb_9995f" and v.t ~= "bgr_5999f" and v.t ~= "rgb_11_11_10f" and v.t ~= "bgr_10_11_11f" then
				print_("	rgb_11_11_10f tmp;")
				print_("	tmp = v;")
				print_("	*this = unpack_11_11_10f(tmp);")



			elseif (v.t == "rgb_9995f" or v.t == "bgr_5999f") and (j.t == "rgb_9995f" or j.t == "bgr_5999f") then
				print_("	r = v.r;")
				print_("	g = v.g;")
				print_("	b = v.b;")
				print_("	a = v.a;")

			elseif (v.t == "rgb_11_11_10f" or v.t == "bgr_10_11_11f") and (j.t == "rgb_11_11_10f" or j.t == "bgr_10_11_11f") then
				print_("	r = v.r;")
				print_("	g = v.g;")
				print_("	b = v.b;")



			elseif j.t == "rgb_9995f" and v.t ~= "rgb_9995f" and v.t ~= "bgr_5999f" then
				print_("	rgb_32f tmp;")
				print_("	tmp = v;")
				print_("	*this = pack_9995f(tmp);")

			elseif j.t == "bgr_5999f" and v.t ~= "rgb_9995f" and v.t ~= "bgr_5999f" then
				print_("	rgb_32f tmp;")
				print_("	tmp = v;")
				print_("	*this = pack_9995f(tmp);")

			elseif j.t == "rgb_11_11_10f" and v.t ~= "rgb_11_11_10f" and v.t ~= "bgr_10_11_11f" then
				print_("	rgb_32f tmp;")
				print_("	tmp = v;")
				print_("	*this = pack_11_11_10f(tmp);")

			-- elseif j.t == "bgr_10_11_11f" and (v.t == "rgb_11_11_10f" or v.t == "bgr_10_11_11f") then
				-- print_("	*this = pack_11_11_10f((rgb_32f)v);")


			elseif v.t == "rgb_9995f" and j.t ~= "rgb_9995f" and j.t ~= "bgr_5999f" and j.t ~= "rgb_11_11_10f" and j.t ~= "bgr_10_11_11f" then
				print_("	rgb_32f tmp;")
				print_("	tmp = v;")
				print_("	*this = pack_9995f(tmp);")
			elseif v.t == "bgr_5999f" and j.t ~= "rgb_9995f" and j.t ~= "bgr_5999f" and j.t ~= "rgb_11_11_10f" and j.t ~= "bgr_10_11_11f" then
				print_("	rgb_32f tmp;")
				print_("	tmp = v;")
				print_("	*this = pack_9995f(tmp);")

			elseif v.t == "rgb_11_11_10f" and j.t ~= "rgb_9995f" and j.t ~= "bgr_5999f" and j.t ~= "rgb_11_11_10f" and j.t ~= "bgr_10_11_11f" then
				print_("	rgb_32f tmp;")
				print_("	tmp = v;")
				print_("	*this = pack_11_11_10f(tmp);")
			elseif v.t == "bgr_10_11_11f" and j.t ~= "rgb_9995f" and j.t ~= "bgr_5999f" and j.t ~= "rgb_11_11_10f" and j.t ~= "bgr_10_11_11f" then
				print_("	rgb_32f tmp;")
				print_("	tmp = v;")
				print_("	*this = pack_11_11_10f(tmp);")



			elseif j.t == "bgr_10_11_11f" and (v.t == "rgb_11_11_10f" or v.t == "bgr_10_11_11f") then
				print_("	rgb_32f tmp;")
				print_("	tmp = v;")
				print_("	*this = pack_11_11_10f(tmp);")


			else
					if v.p == 4 and j.p == 4 then
					if n1==1 and (n2==1 or n2==2) then
						print_("	r=("..y.."v.r"..z..");")

					elseif n1==1 and (n2==3 or n2==4) and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=float2half(M_GRAY(half2float(v.r), half2float(v.g), half2float(v.b)));")
					elseif n1==1 and (n2==3 or n2==4) then
						print_("	r=float2half(M_GRAY(half2float(v.r), half2float(v.g), half2float(v.b)));")

					elseif n1==2 and n2==2 then
						print_("	r=v.r;")
						print_("	g=v.g;")
					elseif n1==2 and n2==1 then
						print_("	r=v.r;")
						print_("	g=float2half(1.0f);")

					elseif n1==2 and n2==3 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=float2half(M_GRAY(half2float(v.r), half2float(v.g), half2float(v.b)));")
						print_("	g=float2half(1.0f);")
					elseif n1==2 and n2==3 then
						print_("	r=float2half(M_GRAY(half2float(v.r), half2float(v.g), half2float(v.b)));")
						print_("	g=float2half(1.0f);")

					elseif n1==2 and n2==4 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=float2half(M_GRAY(half2float(v.r), half2float(v.g), half2float(v.b)));")
						print_("	g=v.a;")
					elseif n1==2 and n2==4 then
						print_("	r=float2half(M_GRAY(half2float(v.r), half2float(v.g), half2float(v.b)));")
						print_("	g=v.a;")

					elseif n1==3 and (n2==1 or n2==2) and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=v.r;")
					elseif n1==3 and (n2==1 or n2==2) then
						print_("	r=v.r;")
						print_("	g=v.r;")
						print_("	b=v.r;")

					elseif n1==3 and (n2==3 or n2==4) and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=v.r;")
						print_("	g=v.g;")
						print_("	b=v.b;")
						-- print_("	a=float2half(v.a*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")
					elseif n1==3 and (n2==3 or n2==4) then
						print_("	r=v.r;")
						print_("	g=v.g;")
						print_("	b=v.b;")
						-- print_("	a=float2half(v.a*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")

					elseif n1==4 and n2==3 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=v.r;")
						print_("	g=v.g;")
						print_("	b=v.b;")
						print_("	a=float2half(1.0f);")
					elseif n1==4 and n2==3 then
						print_("	r=v.r;")
						print_("	g=v.g;")
						print_("	b=v.b;")
						print_("	a=float2half(1.0f);")

					elseif n1==4 and n2==4 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=v.r;")
						print_("	g=v.g;")
						print_("	b=v.b;")
						print_("	a=v.a;")
					elseif n1==4 and n2==4 then
						print_("	r=v.r;")
						print_("	g=v.g;")
						print_("	b=v.b;")
						print_("	a=v.a;")



					elseif n1==4 and n2==1 and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=b=v.r;")
						print_("	a=float2half(1.0f);")
					elseif n1==4 and n2==1 then
						print_("	r=v.r;")
						print_("	g=v.r;")
						print_("	b=v.r;")
						print_("	a=float2half(1.0f);")

					elseif n1==4 and n2==2 and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=b=v.r;")
						print_("	a=v.g;")
					elseif n1==4 and n2==2 then
						print_("	r=v.r;")
						print_("	g=v.r;")
						print_("	b=v.r;")
						print_("	a=v.g;")


					else
						if j.b[1] or v.b[1] then
							print_("	r=v.r;")
						end
						if j.b[2] or v.b[2] then
							print_("	g=v.g;")
						end
						if j.b[3] or v.b[3] then
							print_("	b=v.b;")
						end
						if j.b[4] or v.b[4] then
							print_("	a=v.a;")
						end
					end
				elseif v.p == 4 then
					if n1==1 and (n2==1 or n2==2) then
						print_("	r=float2half("..y.."v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")

					elseif n1==1 and (n2==3 or n2==4) and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=float2half(M_GRAY("..y.."v.r"..z..", "..y.."v.g"..z..", "..y.."v.b"..z..")*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
					elseif n1==1 and (n2==3 or n2==4) then
						print_("	r=float2half(M_GRAY("..
						  y.."v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						")"..x..");")

					elseif n1==2 and n2==2 then
						print_("	r=float2half("..y.."v.r" .. z .. "*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half("..y.."v.g" .. z .. "*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
					elseif n1==2 and n2==1 then
						print_("	r=float2half("..y.."v.r" .. z .. "*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x.. ");")
						print_("	g=float2half(1.0f);")

					elseif n1==2 and n2==3 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=float2half(M_GRAY("..y.."v.r"..z..", "..y.."v.g"..z..", "..y.."v.b" .. z .. ")*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half(1.0f);")
					elseif n1==2 and n2==3 then
						print_("	r=float2half(M_GRAY("..
						  ""..y.."v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						")"..x..");")
						print_("	g=float2half(1.0f);")

					elseif n1==2 and n2==4 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=float2half(M_GRAY("..y.."v.r"..z..", "..y.."v.g"..z..", "..y.."v.b"..z..")*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half("..y.."v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
					elseif n1==2 and n2==4 then
						print_("	r=float2half(M_GRAY("..
						  ""..y.."v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						")"..x..");")
						print_("	g=float2half("..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")

					elseif n1==3 and (n2==1 or n2==2) and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=b=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
					elseif n1==3 and (n2==1 or n2==2) then
						print_("	r=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")

					elseif n1==3 and (n2==3 or n2==4) and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=float2half("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						-- print_("	a=float2half(v.a*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")
					elseif n1==3 and (n2==3 or n2==4) then
						print_("	r=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=float2half("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						-- print_("	a=float2half(v.a*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")

					elseif n1==4 and n2==3 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=float2half("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=float2half(1.0f);")
					elseif n1==4 and n2==3 then
						print_("	r=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=float2half("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=float2half(1.0f);")

					elseif n1==4 and n2==4 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=float2half("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=float2half("..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")
					elseif n1==4 and n2==4 then
						print_("	r=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=float2half("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=float2half("..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")



					elseif n1==4 and n2==1 and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=b=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	a=float2half(1.0f);")
					elseif n1==4 and n2==1 then
						print_("	r=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=float2half(1.0f);")

					elseif n1==4 and n2==2 and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=b=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	a=float2half("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")
					elseif n1==4 and n2==2 then
						print_("	r=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=float2half("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")


					else
						if j.b[1] or v.b[1] then
							print_("	r=float2half("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						end
						if j.b[2] or v.b[2] then
							print_("	g=float2half("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						end
						if j.b[3] or v.b[3] then
							print_("	b=float2half("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						end
						if j.b[4] or v.b[4] then
							print_("	a=float2half("..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")
						end
					end
				elseif v.p == 3 then
					if n1==1 and (n2==1 or n2==2) then
						print_("	r="..y.."v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")

					elseif n1==1 and (n2==3 or n2==4) and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=M_GRAY("..y.."v.r"..z..", "..y.."v.g"..z..", "..y.."v.b"..z..")*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
					elseif n1==1 and (n2==3 or n2==4) then
						print_("	r=M_GRAY("..
						  ""..y.."v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						")"..x..";")

					elseif n1==2 and n2==2 then
						print_("	r="..y.."v.r" .. z .. "*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g="..y.."v.g" .. z .. "*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")
					elseif n1==2 and n2==1 then
						print_("	r="..y.."v.r" .. z .. "*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x.. ";")
						print_("	g=0;")

					elseif n1==2 and n2==3 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=M_GRAY("..y.."v.r"..z..", "..y.."v.g"..z..", "..y.."v.b"..z..")*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g=0;")
					elseif n1==2 and n2==3 then
						print_("	r=M_GRAY("..
						  ""..y.."v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						")"..x..";")
						print_("	g=0;")

					elseif n1==2 and n2==4 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=M_GRAY("..y.."v.r"..z..", "..y.."v.g"..z..", "..y.."v.b"..z..")*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g="..y.."v.a"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
					elseif n1==2 and n2==4 then
						print_("	r="..y.."M_GRAY("..
						  "v.r*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", v.g*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", v.b*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						")"..z..x..";")
						print_("	g="..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")

					elseif n1==3 and (n2==1 or n2==2) and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=b="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
					elseif n1==3 and (n2==1 or n2==2) then
						print_("	r="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")
						print_("	b="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..";")

					elseif n1==3 and (n2==3 or n2==4) and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g="..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")
						print_("	b="..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..";")
						-- print_("	a=v.a*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..";")
					elseif n1==3 and (n2==3 or n2==4) then
						print_("	r="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g="..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")
						print_("	b="..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..";")
						-- print_("	a=v.a*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..";")

					elseif n1==4 and n2==3 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g="..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")
						print_("	b="..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..";")
						print_("	a=" .. t[k].a .. ";")
					elseif n1==4 and n2==3 then
						print_("	r="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g="..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")
						print_("	b="..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..";")
						print_("	a=" .. t[k].a .. ";")

					elseif n1==4 and n2==4 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g="..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")
						print_("	b="..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..";")
						print_("	a="..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..";")
					elseif n1==4 and n2==4 then
						print_("	r="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g="..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")
						print_("	b="..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..";")
						print_("	a="..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..";")



					elseif n1==4 and n2==1 and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=b="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	a=" .. t[k].a .. ";")
					elseif n1==4 and n2==1 then
						print_("	r="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")
						print_("	b="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..";")
						print_("	a=" .. t[k].a .. ";")

					elseif n1==4 and n2==2 and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=b="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	a="..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..";")
					elseif n1==4 and n2==2 then
						print_("	r="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						print_("	g="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")
						print_("	b="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..";")
						print_("	a="..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..";")


					else
						if j.b[1] or v.b[1] then
							print_("	r="..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..";")
						end
						if j.b[2] or v.b[2] then
							print_("	g="..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..";")
						end
						if j.b[3] or v.b[3] then
							print_("	b="..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..";")
						end
						if j.b[4] or v.b[4] then
							print_("	a="..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..";")
						end
					end
				else
					if n1==1 and (n2==1 or n2==2) then
						print_("	r=fastRound("..y.."v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")

					elseif n1==1 and (n2==3 or n2==4) and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=fastRound(M_GRAY("..y.."v.r"..z..", "..y.."v.g"..z..", "..y.."v.b"..z..")*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
					elseif n1==1 and (n2==3 or n2==4) then
						print_("	r=fastRound(M_GRAY("..
						  ""..y.."v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						")"..x..");")

					elseif n1==2 and n2==2 then
						print_("	r=fastRound("..y.."v.r" .. z .. "*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=fastRound("..y.."v.g" .. z .. "*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
					elseif n1==2 and n2==1 then
						print_("	r=fastRound("..y.."v.r" .. z .. "*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x.. ");")
						print_("	g=0;")

					elseif n1==2 and n2==3 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=fastRound(M_GRAY("..y.."v.r"..z..", "..y.."v.g"..z..", "..y.."v.b"..z..")*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=0;")
					elseif n1==2 and n2==3 then
						print_("	r=fastRound(M_GRAY("..
						  ""..y.."v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", "..y.."v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						")"..x..");")
						print_("	g=0;")

					elseif n1==2 and n2==4 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=fastRound(M_GRAY("..y.."v.r"..z..", "..y.."v.g"..z..", "..y.."v.b"..z..")*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=fastRound("..y.."v.a"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
					elseif n1==2 and n2==4 then
						print_("	r=fastRound("..y.."M_GRAY("..
						  "v.r*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", v.g*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						", v.b*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[1]) .. "_MULT"..
						")"..z..x..");")
						print_("	g=fastRound("..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")

					elseif n1==3 and (n2==1 or n2==2) and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=b=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
					elseif n1==3 and (n2==1 or n2==2) then
						print_("	r=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")

					elseif n1==3 and (n2==3 or n2==4) and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=fastRound("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=fastRound("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						-- print_("	a=fastRound(v.a*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")
					elseif n1==3 and (n2==3 or n2==4) then
						print_("	r=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=fastRound("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=fastRound("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						-- print_("	a=fastRound(v.a*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")

					elseif n1==4 and n2==3 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=fastRound("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=fastRound("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=" .. v.a .. ";")
					elseif n1==4 and n2==3 then
						print_("	r=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=fastRound("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=fastRound("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=" .. v.a .. ";")

					elseif n1==4 and n2==4 and j.b[1] == j.b[2] and j.b[2] == j.b[3] then
						print_("	r=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=fastRound("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=fastRound("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=fastRound("..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")
					elseif n1==4 and n2==4 then
						print_("	r=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=fastRound("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=fastRound("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=fastRound("..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")



					elseif n1==4 and n2==1 and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=b=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	a=" .. v.a .. ";")
					elseif n1==4 and n2==1 then
						print_("	r=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=" .. v.a .. ";")

					elseif n1==4 and n2==2 and v.b[1] == v.b[2] and v.b[2] == v.b[3] then
						print_("	r=g=b=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	a=fastRound("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")
					elseif n1==4 and n2==2 then
						print_("	r=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						print_("	g=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						print_("	b=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						print_("	a=fastRound("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")


					else
						if j.b[1] or v.b[1] then
							print_("	r=fastRound("..y .. "v.r"..z.."*BIT_" .. tostring(j.b[1]) .. "_" .. tostring(v.b[1]) .. "_MULT"..x..");")
						end
						if j.b[2] or v.b[2] then
							print_("	g=fastRound("..y .. "v.g"..z.."*BIT_" .. tostring(j.b[2]) .. "_" .. tostring(v.b[2]) .. "_MULT"..x..");")
						end
						if j.b[3] or v.b[3] then
							print_("	b=fastRound("..y .. "v.b"..z.."*BIT_" .. tostring(j.b[3]) .. "_" .. tostring(v.b[3]) .. "_MULT"..x..");")
						end
						if j.b[4] or v.b[4] then
							print_("	a=fastRound("..y .. "v.a"..z.."*BIT_" .. tostring(j.b[4]) .. "_" .. tostring(v.b[4]) .. "_MULT"..x..");")
						end
					end
				end
			end
			print_(" ")
			print_("	return *this;")
			print_("};")
		end
		end
		print_(" ")
		h:close()
	end
	end
	-- _G.h = io.open("Imagem_003/Generated/pixels.inl" ,"w")
		-- print_('\n')
	-- h:close()

	_G.h = io.open("Imagem_003/Generated/_GEN_pixels.cpp" ,"w")
	-- print_(header3)
	for k,v in pairs(t) do
		if v.i == true then
			print_('#include "pixels/'..v.t..'.cpp"')
		else
			print_('// include "pixels/'..v.t..'.cpp"')
		end		
	end
	h:close()

	-- print_("")
	-- print_("")
end

function print_l() -- print struct def
	-- print_(header7)
	-- print_("#pragma once\n\n")	
	for k,v in pairs(t) do
		if v.i == true then
			print_("struct " .. v.t .. ";")
		else
			print_("//struct " .. v.t .. ";")
		end
	end
			print_("\n\n\n")
end

function print_s() -- print structs header
	-- print_(header1)
	-- print_("#pragma once\n\n")	
	for k,v in pairs(t) do
		if v.i == true then
			print_("struct " .. v.t .. " {")
			print_(v.s)
			print_(" ")
			for i,j in pairs(t) do
				if j.i == true then
					print_("	" .. v.t .. "&operator=(const " .. j.t .. "			&v);")
				end
			end
			print_("};")
			print_(" ")
		end
	end
	-- print_(header2)
end

h = io.open("Imagem_003/Generated/_GEN_Structs.hpp" ,"w")
	print_l()	 -- struct.h
	print_s()	 -- structs.h
h:close()

-- h = io.open("Imagem_003/Generated/_GEN_Struct.hpp" ,"w")
	-- print_s()	 -- structs.h
-- h:close()

	print_f()    -- bgra_8u.cpp


h = io.open("Imagem_003/Generated/_GEN_Convert.inl" ,"w")
	print_c()    -- convert.cpp
h:close()

h = io.open("Imagem_003/Generated/_GEN_InfoDataFormat.inl" ,"w")
	print_info()	 -- structs.h
h:close()
