#include <iostream>
#include <vector>

class line {
private:
	std::vector<char> line;
public:
	void operator=(char* _line) {
		int _line_length = 0;
		for (; _line[_line_length] != '\0'; _line_length++);

		if (line.size() < (_line_length + 1)) {
			line.resize((_line_length + 1));
		}

		for (int i = 0; i < _line_length; i++) {
			line[i] = _line[i];
		}

		line[_line_length] = '\0';

		return;
	}
	void operator=(const char* _line) {
		int _line_length = 0;
		for (; _line[_line_length] != '\0'; _line_length++);

		if (line.size() < (_line_length + 1)) {
			line.resize((_line_length + 1));
		}

		for (int i = 0; i < _line_length; i++) {
			line[i] = _line[i];
		}

		line[_line_length] = '\0';

		return;
	}
	void operator=(std::string _line) {
		if (line.size() < (_line.length() + 1)) {
			line.resize((_line.length() + 1));
		}

		for (int i = 0; i < _line.length(); i++) {
			line[i] = _line[i];
		}

		line[_line.length()] = '\0';

		return;
	}
	void operator<<(char* _line) {
		int _line_length = 0;
		for (; _line[_line_length] != '\0'; _line_length++);

		if (line.size() < (_line_length + 1)) {
			line.resize((_line_length + 1));
		}

		for (int i = 0; i < _line_length; i++) {
			line[i] = _line[i];
		}

		line[_line_length] = '\0';

		return;
	}
	void operator<<(const char* _line) {
		int _line_length = 0;
		for (; _line[_line_length] != '\0'; _line_length++);

		if (line.size() < (_line_length + 1)) {
			line.resize((_line_length + 1));
		}

		for (int i = 0; i < _line_length; i++) {
			line[i] = _line[i];
		}

		line[_line_length] = '\0';

		return;
	}
	char operator[](int _i) {
		return line[_i];
	}
	char* get() {
		char* buffer = new char[line.size()];

		for (int i = 0; i < line.size(); i++) {
			buffer[i] = line[i];
		}

		return buffer;
	}
};

int main(void) {
	line l;
	std::string ls;

	ls = "Hi!";

	l = ls;

	return 0;
}