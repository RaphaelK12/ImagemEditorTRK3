#pragma once
struct img_face{ // cube faces or 3d layers
	img_face();
	img_face(const img_face &c);
	img_face(img_face *c);
	img_face(const img_basis &c);
	img_face(img_basis *c);
	img_face &operator = (const img_face &c);
	img_face &operator = (const img_face *c);
	~img_face();
	void destroy();

	vector<img_basis*> m_mipmaps;		// mipmaps, mip 0 = original, 1 = half res, 2 = quarter res, ... ;
};
