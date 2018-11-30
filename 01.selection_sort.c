//vishnu v
//s3D
//57
#include <stdio.h>

int selectionSort(int array[], int size) {
	int i, j, pos, temp;
	for (i=0; i<size; i++) {
		pos = i;

		for (j=i; j<size; j++) {
			if (array[j] < array[pos]) {
				pos =j;
			}
		}
		if (i != pos) {
			temp = array[i];
			array[i] = array[pos];
			array[pos] = temp;
		}
	}
}

int main() {
	int i, j, pos, array[100], 
