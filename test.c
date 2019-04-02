#include<stdio.h>

int main() {

float[500] x;
int i, store = 0;

for(i = 0; i < 500; i++) {
if(x[i] > store)
store = x[i];
i++;
}
printf("The largest element is: %d\n", store);

return 0;
}
