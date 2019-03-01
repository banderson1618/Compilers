#ifndef REGISTER_POOL_H
#define REGISTER_POOL_H


#include <vector>
#include <string>


class RegisterPool{
	public:
		RegisterPool();
		std::string get_register();
		void return_register(std::string);
		int num_registers();	
	private:
		std::vector<std::string> registers;
		void init_registers();
};

#endif

