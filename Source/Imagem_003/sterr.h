#pragma once
struct sterr{
	~sterr();
	sterr();
	sterr(const string &file, uint line, uint error, const string &description);

	string m_file;
	uint m_line;
	uint m_error;
	string m_description;
};
