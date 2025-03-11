#include <stdio.h>

int nyan(int temp, int a, int b, int c, int d, int e);

int main(){
    int a, b, c, d, e, temp;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    temp = a*b;
    printf("%d", nyan(a, b, c, d, e));
}

int nyan(int a, int b, int c, int d, int e){
    int num[20], index;
    int temp = a*b;
    if (temp % c == 0 || temp % d == 0 || temp % e == 0) num[0] = temp;
    else {
        num[0] = 0;
        temp = a*c;
        if (temp % b == 0 || temp % d == 0 || temp % e == 0) num[1] = temp;
        else {
            num[1] = 0;
            temp = a*d;
            if (temp % c == 0 || temp % b == 0 || temp % e == 0) num[2] = temp;
            else {
                num[2] = 0;
                temp = a*e;
                if (temp % c == 0 || temp % d == 0 || temp % e == 0) num[3] = temp;
                else {
                    num[3] = 0;
                    temp = b*c;
                    if (temp % a == 0 || temp % d == 0 || temp % e == 0) num[4] = temp;
                    else {
                        num[4] = 0;
                        temp = b*d;
                        if (temp % a == 0 || temp % c == 0 || temp % e == 0) num[5] = temp;
                        else {
                            num[5] = 0;
                            temp = b*e;
                            if (temp % a == 0 || temp % c == 0 || temp % d == 0) num[6] = temp;
                            else {
                                num[6] = 0;
                                temp = c*d;
                                if (temp % a == 0 || temp % b == 0 || temp % e == 0) num[7] = temp;
                                else {
                                    num[7] = 0;
                                    temp = c*e;
                                    if (temp % a == 0 || temp % b == 0 || temp % d == 0) num[8] = temp;
                                    else {
                                        num[8] = 0;
                                        temp = d*e;
                                        if (temp % a == 0 || temp % b == 0 || temp % c == 0) num[9] = temp;
                                        else {
                                            num[9] = 0;
                                            temp = a*b*c;
                                            num[10] = temp;
                                            temp = a*b*d;
                                            num[11] = temp;
                                            temp = a*b*e;
                                            num[12] = temp;
                                            temp = a*c*d;
                                            num[13] = temp;
                                            temp = a*c*e;
                                            num[14] = temp;
                                            temp = a*d*e;
                                            num[15] = temp;
                                            temp = b*c*d;
                                            num[16] = temp;
                                            temp = b*c*e;
                                            num[17] = temp;
                                            temp = b*d*e;
                                            num[18] = temp;
                                            temp = c*d*e;
                                            num[19] = temp;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(int j = 0 ; j < 25 ; j++){
        for(int i = 0 ; i < 19 ; i++) {
            if (num[i] > num[i+1]){
                temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
            }
        }
    }
    for(int i = 0 ; i < 20 ; i++) {
        if (num[i] != 0){
            index = --i;
            break;
        }
    }
    return num[index];
}