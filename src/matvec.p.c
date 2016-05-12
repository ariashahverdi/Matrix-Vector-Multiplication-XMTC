#include <xmtc.h>

int main(){

	// WRITE YOUR CODE HERE	
	
	spawn (0, m)
	{
		int ptr, ptr_k0, ptr_k1;
		int diff_ptr;
		int idx;
		result[$] = 0;
		ptr_k0 = rowptr[$];
		ptr_k1 = rowptr[$+1];
		ptr = ptr_k0;
		while (ptr_k0 < ptr_k1)
		{	
			diff_ptr = ptr_k0 - ptr;
			idx = col_ind[ptr_k0];
			result[$] += values[ptr + diff_ptr]*vector[idx];
			ptr_k0++;
		}
	}



	//// END OF YOUR CODE

	// DONT MODIFY THE REST
	#ifdef PRINT_RESULT
	int i;
	for(i=0;i<m;i++)
		printf("%d\n",result[i]);
	#endif
}
