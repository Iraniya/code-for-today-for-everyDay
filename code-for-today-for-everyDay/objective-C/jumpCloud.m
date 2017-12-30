#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
    int n;
    int k;
    scanf("%i %i",&n,&k);
    int c[n];
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%i",&c[c_i]);
    }
    int energyLeft = 100;
    int currentIndex = 0;
    while (currentIndex <= n-1) {
        currentIndex = (currentIndex + k)%n;
        int currentCloud = c[currentIndex];
        
        if(currentCloud == 0) {
            energyLeft = energyLeft -1;
        }
        else if (currentCloud == 1) {
            energyLeft = energyLeft -3;
        }
        
        if(currentIndex == 0){
            break;
        }
    }
    
    printf("%i",energyLeft);
    [pool drain];
    return 0;
}


