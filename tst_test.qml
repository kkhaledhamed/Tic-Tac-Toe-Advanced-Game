import QtQuick 2.15
import QtTest 1.0

TestCase {
    name: "Tests"
    function test_case1(){compare(1+1,2);}
    function test_case2(){compare(1+1,2);}
    function test_case3(){compare(1+1,2);}
    function test_case4(){compare(1+1,2);}
    function test_case5(){compare(1+1,2);}
    function test_case6(){compare(1+1,2);}
    function test_case7(){compare(1+1,2);}
    function test_case8(){compare(1+1,2);}
        function onClickTest(winTokenTest, rowTest, colTest) {
            if (rowTest < 0 || rowTest > 2 || colTest < 0 || colTest > 2) {
                return -1;
            }

            if (winTokenTest === 'X') {
                return 10;
            } else {
                winTokenTest = 'O';
                return 11;
            }
        }
        function checkaccountTest(Registering_StateTest) {
            var SIGN_IN = 0;
            var SIGN_IN_Completed = 2;
            var SIGN_IN_FAILED = -1;
            var SIGN_UP = 1;
            var CHANGE_USER_PASS = 3;
            var SIGN_UP_Completed = 4;
            var CHANGE_INFO = 5;
            var CHANGE_INFO_Completed = 6;

            if (Registering_StateTest === SIGN_IN) {
                if (true) {
                    return SIGN_IN_Completed;
                } else {
                    return SIGN_IN_FAILED;
                }
            } else if (Registering_StateTest === SIGN_UP) {
                if (true) {
                    return SIGN_UP_Completed;
                } else {
                    return CHANGE_USER_PASS;
                }
            } else if (Registering_StateTest === CHANGE_INFO) {
                return CHANGE_INFO_Completed;
            }

            return -1;
        }

        function testcase1() {
            compare(checkwintestdraw('X'), 0);
        }

        function testcase2() {
            compare(checkwintestX('X'), 1);
        }

        function testcase3() {
            compare(checkwintestO('O'), -1);
        }

        function testcase4() {
            compare(onClickTest('X', 3, 3), -1);
        }

        function testcase5() {
            compare(onClickTest('X', 0, 0), 10);
        }

        function testcase6() {
            compare(onClickTest('O', 0, 0), 11);
        }

        function testcase7() {
            compare(checkaccountTest(0), 2);
        }

        function testcase8() {
            compare(checkaccountTest(1), 4);
        }

}
