#include "AssignStatement.hpp"
#include "Expressions/Expression.hpp"
#include "Expressions/LvalueExpression.hpp"

AssignStatement::AssignStatement(LvalueExpression* id, Expression* val){
	_id = id;
	_val = val;
}
