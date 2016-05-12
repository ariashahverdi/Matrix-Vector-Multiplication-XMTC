#include <xmtc.h>

int main(){

	// WRITE YOUR CODE HERE	
	int k;
	int ptr, ptr_k0, ptr_k1;
	int diff_ptr;
	int idx;
	for (k = 0; k < m ; k++)
	{
		result[k] = 0;
		ptr_k0 = rowptr[k];
		ptr_k1 = rowptr[k+1];
		ptr = ptr_k0;
		while (ptr_k0 < ptr_k1)
		{	
			diff_ptr = ptr_k0 - ptr;	
			idx = col_ind[ptr_k0];
			result[k] += values[ptr + diff_ptr]*vector[idx];
			ptr_k0++;
		}
	}

	// END OF YOUR CODE

	// DONT MODIFY THE REST
	#ifdef PRINT_RESULT
	int i;
	for(i=0;i<m;i++)
		printf("%d\n",result[i]);
	#endif
}
