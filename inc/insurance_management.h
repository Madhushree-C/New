/**
* @file insurance_management.h
* Insurance management system with various operation
*
*/
#ifndef __INSURANCE_MANAGEMENT_H__
#define __INSURANCE_MANAGEMENT_H__

#include <stdio.h>
#include <stdlib.h>


/**
* checks whether operand3 is one of the 3 choices
* @param[in] operand1
* where B indicates Bumper to Bumper insurance, F indicates Full Party Insurance and T indicates third party insurance
* @return Result retruns 1 if operand3 is one of the 3 choices else returns 0
*/
int choice(char op1);
/**
* checks whether operand1 contains only character or not
* @param[in] operand1
* @return Result retruns 1 if operand1 only contains character else returns 0
*/
char username(char op2[]);

/**
*  checks whether operand1 contains only character or not
* @param[in] operand1
* @return Result retruns 1 if operand1 only contains character else returns 0
*/
char password(char op2[]);

/**
* tells whether cliend as entered the valid gender or not
* it is valid if client enter 1 or 2 or 3
* since M/m means male, F/f means female and O/o means others
* @param[in] operand1
* @return Result if operand1 is 1 client as entered valid gender else invalid genter
*/
int gender(char op1);

/**
*  checks whether operand3 is between 18 to 100
* @param[in] operand3
* @return Result retruns 1 if operand3 is between 18 to 100 else returns 0
*/
int age(int op3);


/**
* checks whether operand1 as 10 digits
* @param[in] operand1
* @return Result retruns 1 if operand1 as 10 digits else returns 0
*/
int phonenumber(char op2[]);



/**
* checks whether operand3 is of 2 or 4
* @param[in] operand1
* 2 indicates two wheeler and 4 indicates four wheeler
* @return Result retruns 1 if operand3 is either 2 or 4 else returns 0
*/
int vehicletype(char op1);


/**
* checks whether operand1 is in size of 15(characters and digits)
* @param[in] operand1
* @return Result retruns 1 if operand1 is in size of 15(characters and digits) else returns 0
*/
char licensenumber(char op2[]);

/**
* checks whether operand1 is in size of 10(characters and digits)
* @param[in] operand1
* @return Result retruns 1 if operand1 is in size of 10(characters and digits) else returns 0
*/
char enginenumber(char op2[]);

/**
* tells whether cliend pays the principle amount or quits the portal
* @param[in] operand1
* @return Result if operand1 is 1 client pays the principle amount else quit the portal
*/
char pay_pa(int op3);



/*//**
* tells whether cliend pays the specified principle amount
* @param[in] operand1
* @return Result returns 1 if correct principle amount is paid else return 0
*/
//char pa_payment(int amnt);

/**
* tells whether cliend as entered correct username and password
* @param[in] id
* @param[in] pwd
* @return Result if cliend as entered correct username and password returns 1 else returns 0
*/
int login(char op2[],char op4[]);

/**
* tells whether cliend can claim the insurance amount or not
* @param[in] id
* @return Result if cliend can claim the amount if it returns 1 else client can't claim
*/
int claim(char op2[]);


#endif  /* #define __INSURANCE_MANAGEMENT_H__ */
