#pragma once

struct img_array{
	img_array();
	img_array(const img_array &c);
	img_array(const img_array *c);
	img_array& operator=(const img_array &c);
	img_array& operator=(const img_array *c);
	~img_array();
	void destroy();

	vector<img_face*> m_faces;		// mipmaps, mip 0 = original, 1 = half res, 2 = quarter res, ... ;
};

