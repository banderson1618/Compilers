#ifndef STRING_TABLE_H
#define STRING_TABLE_H


#include <vector>
#include <map>
#include <string>


class StringTable{
	public:
		StringTable();

		std::string add_string(std::string);
		std::string get_string_label(std::string);

		void write_strings();
		
	private:
		std::map<std::string, std::string> string_ids;
		int next_id;
};

#endif

