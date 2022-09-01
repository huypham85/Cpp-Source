#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int highscore[5] = {1,1,1,1,1};
    FILE* f;
   	f = fopen("Highscore.bin", "a+");
    if (fread(highscore, sizeof(highscore), 1, f))
    {
        printf("ReadFile success!\n");
    }
    else printf("ErrorRFile");
    fclose(f);
    for(int i=0; i<5;i++) cout<<highscore[i]<<" ";

    /*f = fopen("Highscore.bin", "w+");
    if (fwrite(highscore, sizeof(highscore), 1, f))
    {
        printf("WriteFile success!\n");
    }
    else printf("ErrorWFile"); fwrite(highscore, sizeof(highscore), 1, f);
    fclose(f);*/
    
	return 0;
}

