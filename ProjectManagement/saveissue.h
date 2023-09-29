#include<stdlib.h>

void issueBook() {
//	int id;
//	char name[90];
//	char author[90];
//	int quantity;
//	int price;
//	int rackno;
	
	
		printf("\n enter the id of book");
				scanf("%d",&id);
				printf("\n enter the name of the book");
				scanf("%s",&name);
				printf("\n enter the author of the book");
				scanf("%s",&author);
				printf("\n enter the quantity of book");
				scanf("%d",&quantity);
				printf("\n enter the price of the book");
				scanf("%d",&price);
				printf("\n enter the rack number ");
				scanf("%d",&rackno);
				Book b;
    FILE *fptr = fopen("data_db.txt","a");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return;
    }
    
    fprintf(fptr,"%d\t%s\t%s\t%d\t%d\t%d\t%d",b.id,b.name,b.auth,b.quantity,b.price,b.rackno);
    fclose(fptr);
    
    printf("Book issued successfully.\n");
}
