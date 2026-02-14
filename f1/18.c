#include <stdio.h>

int main(){
    int i,x,y,m,nomre1[5],mostamar1[5],nobataval=0,nomre2[5],mostamar2[5],nobatdovom=0,moadel;

    printf("dar in bakhsh nomre novat aval ra vared mikonid\n");
    printf("===============================================\n");
    for (i = 0; i < 5; i++)
    {
        printf("nomre dars %d ra vared konid: ",i + 1);
        scanf("%d",&nomre1[i]);

        printf("nomre mostamar dars %d ra vared konid: ",i + 1);
        scanf("%d",&mostamar1[i]);

        for (x = 0; x < 5; x++)
        {
            nobataval = (nomre1[i] + mostamar1 [i]) / 2;
        }
        
    }

    printf("dar in bakhsh nomre novat dovom ra vared mikonid\n");
    printf("===============================================\n");
    for (y = 0; y < 5; y++)
    {
        printf("nomre dars %d ra vared konid: ",y + 1);
        scanf("%d",&nomre2[y]);

        printf("nomre mostamar dars %d ra vared konid: ",y + 1);
        scanf("%d",&mostamar2[y]);

        for (m = 0; m < 5; m++)
        {
            nobatdovom = (nomre2[y] + mostamar2 [y]) / 2;
        }
        
    }
    
    moadel = (nobataval + nobatdovom) * 2;
    printf("moadel dars shoma ebarat ast az: %d",moadel);

    return 0;
}   