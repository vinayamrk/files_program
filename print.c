#include"inv.h"

void print_part()
{
    FILE*infile;
    inventory npart;
    infile=fopen("Part.dat","r");
    while(fread(&npart,sizeof(npart),1,infile))
    {
       printf("Part No=%d, Name=%s, stock=%d, price=%0.2f\n",npart.part_no,npart.name,npart.stock,npart.price);
    }
    fclose(infile);
}
