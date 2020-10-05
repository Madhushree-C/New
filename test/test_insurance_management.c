#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <insurance_management.h>
#define PROJECT_NAME    "InsuranceManagement"

/* Prototypes for all the test functions */
void test_validchoice(void);
void test_invalidchoice(void);
void test_validusername(void);
void test_invalidusername(void);
void test_validpassword(void);
void test_invalidpassword(void);
void test_validgender(void);
void test_invalidgender(void);
void test_validage(void);
void test_invalidage(void);
void test_validphonenumber(void);
void test_invalidphonenumber(void);
void test_validvehicletype(void);
void test_invalidvehicletype(void);
void test_validlicensenumber(void);
void test_invalidlicensenumber(void);
void test_validenginenumber(void);
void test_invalidenginenumber(void);
void test_validpay_pa(void);
void test_invalidpay_pa(void);
void test_validlogin(void);
void test_invalidlogin(void);
void test_validclaim(void);
void test_invalidclaim(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


 /* Add your test functions in this format for testing*/
  CU_add_test(suite, "choice", test_validchoice);
  CU_add_test(suite, "choice", test_invalidchoice);
  CU_add_test(suite, "username", test_validusername);
  CU_add_test(suite, "username", test_invalidusername);
  CU_add_test(suite, "password", test_validpassword);
  CU_add_test(suite, "password", test_invalidpassword);
  CU_add_test(suite, "gender", test_validgender);
  CU_add_test(suite, "gender", test_invalidgender);
  CU_add_test(suite, "age", test_validage);
  CU_add_test(suite, "age", test_invalidage);
  CU_add_test(suite, "phonenumber", test_validphonenumber);
  CU_add_test(suite, "phonenumber", test_invalidphonenumber);
  CU_add_test(suite, "licensenumber", test_validlicensenumber);
  CU_add_test(suite, "licensenumber", test_invalidlicensenumber);
  CU_add_test(suite, "enginenumber", test_validenginenumber);
  CU_add_test(suite, "enginenumber", test_invalidenginenumber);
  CU_add_test(suite, "pay_pa", test_validpay_pa);
  CU_add_test(suite, "pay_pa", test_invalidpay_pa);
  CU_add_test(suite, "login", test_validlogin);
  CU_add_test(suite, "login", test_invalidlogin);
  CU_add_test(suite, "claim", test_validclaim);
  CU_add_test(suite, "claim", test_invalidclaim);
  
  /* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 



void test_validchoice(void) {
  CU_ASSERT(1 == choice('B'));
  CU_ASSERT(1 == choice('F'));
  CU_ASSERT(1 == choice('T'));
  
}

void test_invalidchoice(void) {
  CU_ASSERT(0 == choice('P'));
  CU_ASSERT(0 == choice('I'));
}

void test_validusername(void) {
  CU_ASSERT(1 == username("madhushree c"));
  CU_ASSERT(1 == username("manyatha a"));
}

void test_invalidusername(void) {
  CU_ASSERT(0 == username("madhushree2698"));
  CU_ASSERT(0 == username("manyatha8989"));
}

void test_validpassword(void) {
  CU_ASSERT(1 == password("madhu@123456"));
  CU_ASSERT(1 == password("manyatha@123"));
}

void test_invalidpassword(void) {
  CU_ASSERT(0 == password("u@123"));
  CU_ASSERT(0 == password("ny$ha"));
}

void test_validgender(void)  {
  CU_ASSERT(1 == gender('m'));
  CU_ASSERT(1 == gender('f'));
  CU_ASSERT(1 == gender('o'));
  CU_ASSERT(1 == gender('M'));
  CU_ASSERT(1 == gender('F'));
  CU_ASSERT(1 == gender('O'));
}

void test_invalidgender(void) {
  CU_ASSERT(0 == gender('G'));
  CU_ASSERT(0 == gender('b'));
}

void test_validage(void) {
  CU_ASSERT(1 == age(20));
  CU_ASSERT(1 == age(99));
}

void test_invalidage(void) {
  CU_ASSERT(0 == age(16));
  CU_ASSERT(0 == age(110));
}

void test_validphonenumber(void) {
  CU_ASSERT(1 == phonenumber("1234567890"));
  CU_ASSERT(1 == phonenumber("4536271809"));
}

void test_invalidphonenumber(void) {
  CU_ASSERT(0 == phonenumber("4567890"));
  CU_ASSERT(0 == phonenumber("123456789011"));
}

void test_validvehicletype(void) {
  CU_ASSERT(1 == vehicletype(2));
  CU_ASSERT(1 == vehicletype(4));
}

void test_invalidvehicletype(void) {
  CU_ASSERT(0 == vehicletype(3));
  CU_ASSERT(0 == vehicletype(8));
}

void test_validlicensenumber(void) {
  CU_ASSERT(1 == licensenumber("karnatakamysor1"));
  CU_ASSERT(1 == licensenumber("karnataka@mysor"));
  CU_ASSERT(1 == licensenumber("karnatakamysore"));
}

void test_invalidlicensenumber(void) {
  CU_ASSERT(0 == licensenumber("karnatakamysoregok"));
  CU_ASSERT(0 == licensenumber("karnataka myso"));
}

void test_validenginenumber(void) {
  CU_ASSERT(1 == enginenumber("9988776655"));
  CU_ASSERT(1 == enginenumber("2211332211"));
}

void test_invalidenginenumber(void) {
  CU_ASSERT(0 == enginenumber("887788778877"));
  CU_ASSERT(0 == enginenumber("990099"));
}

void test_validpay_pa(void) {
  CU_ASSERT(1 == pay_pa(1));
}

void test_invalidpay_pa(void) {
  CU_ASSERT(0 == pay_pa(0));
}

void test_validlogin(void) {
  CU_ASSERT(1 == login("Madhushree","Madhushree@123"));
  CU_ASSERT(1 == login("Indranichaluvaraj","Indranichaluvaraj@123"));
}

void test_invalidlogin(void) {
  CU_ASSERT(0 == login("Madhu","madhu123"));
  CU_ASSERT(0 == login("Indrani","indrani@"));
}

void test_validclaim(void) {
  CU_ASSERT(1 == claim("BB10954"));
  CU_ASSERT(1 == claim("BB13626"));
}

 void test_invalidclaim(void) {
  CU_ASSERT(0 == claim("FI2164"));
  CU_ASSERT(0 == claim("BB17"));
}
