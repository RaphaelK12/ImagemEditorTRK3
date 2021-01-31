#include "pch.h"
//#include "Generated\_GEN_Struct.h"
#include "Enums.h"
#include "definitions.h"
#include "structs.h"
#include "Imagem_003.h"

img_face::img_face() {
	//m_mipmaps.push_back(new img_basis()); // beter to don't do it?
};

img_face::~img_face() {
	destroy();
}

void img_face::destroy() {
	uint size = m_mipmaps.size();
	for (uint i = 0; i < size; i++) {
		if (m_mipmaps[i])
			delete m_mipmaps[i];
		m_mipmaps[i] = 0;
	}
	m_mipmaps.clear();
	m_mipmaps.shrink_to_fit();
}

img_face::img_face(const img_face& c) {
	if (c.m_mipmaps.size() > 0) {
		//m_mipmaps.reserve(c.m_mipmaps.size());
		for (uint i = 0; i < c.m_mipmaps.size(); i++) {
			if (c.m_mipmaps[i])
				m_mipmaps.push_back(new img_basis(c.m_mipmaps[i]));
		}
	}
};

img_face::img_face(img_face* c) {
	if (c->m_mipmaps.size() > 0) {
		//m_mipmaps.reserve(c->m_mipmaps.size());
		for (uint i = 0; i < c->m_mipmaps.size(); i++) {
			if (c->m_mipmaps[i])
				m_mipmaps.push_back(new img_basis(c->m_mipmaps[i]));
		}
	}
};

img_face::img_face(const img_basis& c) {
	m_mipmaps.push_back(new img_basis(c));
};

img_face::img_face(img_basis* c) {
	m_mipmaps.push_back(c);
};

img_face& img_face::operator = (const img_face& c) {
	if (c.m_mipmaps.size() > 0) {
		destroy();
		//m_mipmaps.reserve(c.m_mipmaps.size());
		for (uint i = 0; i < c.m_mipmaps.size(); i++) {
			if (c.m_mipmaps[i])
				m_mipmaps.push_back(new img_basis(c.m_mipmaps[i]));
		}
	}
	return *this;
};

img_face& img_face::operator = (const img_face* c) {
	if (c->m_mipmaps.size() > 0) {
		destroy();
		//m_mipmaps.reserve(c->m_mipmaps.size());
		for (uint i = 0; i < c->m_mipmaps.size(); i++) {
			if (c->m_mipmaps[i])
				m_mipmaps.push_back(new img_basis(c->m_mipmaps[i]));
		}
	}
	return *this;
};

