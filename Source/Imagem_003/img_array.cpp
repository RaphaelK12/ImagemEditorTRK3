#include "pch.h"
//#include "Generated\_GEN_Struct.inl"
#include "Enums.h"
#include "definitions.h"
#include "structs.h"
#include "Imagem_003.h"

img_array::img_array() {
	m_faces.push_back(new img_face());
};

img_array::~img_array() {
	destroy();
}

void img_array::destroy() {
	uint size;
	size = m_faces.size();
	for (uint i = 0; i < size; i++) {
		if (m_faces[i])
			delete m_faces[i];
	}
	m_faces.clear();
	m_faces.shrink_to_fit();
}

img_array::img_array(const img_array& c) {
	if (c.m_faces.size() > 0) {
		//m_faces.reserve(c.m_faces.size());
		for (uint i = 0; i < c.m_faces.size(); i++) {
			if (c.m_faces[i])
				m_faces.push_back(new img_face(c.m_faces[i]));
		}
	}
};

img_array::img_array(const img_array* c) {
	if (c->m_faces.size() > 0) {
		//m_faces.reserve(c->m_faces.size());
		for (uint i = 0; i < c->m_faces.size(); i++) {
			if (c->m_faces[i])
				m_faces.push_back(new img_face(c->m_faces[i]));
		}
	}
};

img_array& img_array::operator = (const img_array& c) {
	if (c.m_faces.size() > 0) {
		destroy();
		//m_faces.reserve(c.m_faces.size());
		for (uint i = 0; i < c.m_faces.size(); i++) {
			if (c.m_faces[i])
				m_faces.push_back(new img_face(c.m_faces[i]));
		}
	}
	return *this;
};

img_array& img_array::operator = (const img_array* c) {
	if (c->m_faces.size() > 0) {
		destroy();
		//m_faces.reserve(c->m_faces.size());
		for (uint i = 0; i < c->m_faces.size(); i++) {
			if (c->m_faces[i])
				m_faces.push_back(new img_face(c->m_faces[i]));
		}
	}
	return *this;
};

