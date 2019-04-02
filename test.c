#include<stdio.h>

int main() {

int x[] = {13, 214, 982, 24982, 124, 412944, 24, 244, 547, 356};
int i = 0, store = 0;

for(i = 0; i < 10; i++) {
if(x[i] > store) {
store = x[i];
    }
 }

printf("The largest element is: %d\n", store);

return 0;
}
