#ifndef _EXPRESSION_H
#define _EXPRESSION_H
enum eExprErr
{
  EXPR_NUMBER_TOO_LOW = -100,
  EXPR_NUMBER_TOO_HIGH,
  EXPR_INTERM_TOO_HIGH,
  EXPR_DIVIDE_BY_ZERO,
  EXPR_PAREN_MISMATCH,
  EXPR_SYNTAX_ERROR,
  EXPR_TOO_MANY_PAREN,
  EXPR_INVALID_PARAM,
  EXPR_BREAK,
  EXPR_OUT_OF_MEMORY,
  EXPR_CANNOT_USE_X_IN_EXPONENT,
  EXPR_DEGREE_TOO_HIGH,
  EXPR_EXPONENT_TOO_LARGE,
  EXPR_EXPONENT_NEGATIVE,
  EXPR_LEADING_COFF_MULTIPLE_OF_PRIME,
  EXPR_CANNOT_LIFT,
  EXPR_MODULUS_MUST_BE_GREATER_THAN_ONE,
  EXPR_MODULUS_MUST_BE_PRIME_EXP,
  EXPR_BASE_MUST_BE_POSITIVE,
  EXPR_POWER_MUST_BE_POSITIVE,
  EXPR_MODULUS_BASE_NOT_RELATIVELY_PRIME,
  EXPR_MODULUS_POWER_NOT_RELATIVELY_PRIME,
  EXPR_OK = 0
};

enum eExprErr ComputeExpression(char *expr, int type, BigInteger *ExpressionResult);
void textError(char *output, enum eExprErr rc);
#else
#endif