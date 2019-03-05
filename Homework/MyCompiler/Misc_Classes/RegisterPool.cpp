#include "RegisterPool.hpp"

#include <iostream>

RegisterPool::RegisterPool(){
	init_registers();
}


void RegisterPool::init_registers(){
	for (int i = 0; i < 8; i++){
		registers.push_back("$s" + std::to_string(7 - i));
	}
	for (int i = 0; i < 8; i++){
		registers.push_back("$t" + std::to_string(7 - i));
	}
}

std::string RegisterPool::get_register(){
	if (registers.size() <= 0){
		throw "Out of Registers!";
	}
	auto ret_val = registers.back();
	registers.pop_back();
	return ret_val;
}

void RegisterPool::return_register(std::string returned_register){
	registers.push_back(returned_register);
}

int RegisterPool::num_registers(){
	return registers.size();
}

RegisterPool register_pool;
