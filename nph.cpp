#include <iostream>
#include <omp.h>

unsigned int my_hash(const char* s, unsigned int c) {
   unsigned int x = 0;
   for (unsigned int i = 0; s[i] != 0; ++i) {
      x <<= 3;
      x ^= s[i];
   }
   int d = (c / x) % 41;
   return d;
}

int main(){

	double start = omp_get_wtime();

	#pragma omp parallel
	{
		const char* arr[] = {
         "and", "del", "from", "not", "while", 
         "as", "elif", "global", "or", "with", 
         "assert", "else", "if", "pass", "yield", 
         "break", "except", "import", "print", "class", 
         "exec", "in", "raise", "continue", "finally", 
         "is", "return", "def", "for", "lambda", 
         "try"
      	};

		int i, h;
		
		#pragma omp for nowait
		for (i = 0; i < 1948027450; ++i){

			// VARIABLES
			int hashes[41] = {0};
			int exist = 0;

			// GET HASH VALUE FOR EACH WORD
			for (int j = 0; j < 31; ++j){
				h = my_hash(arr[j], i);

				// IF HASH VALUE WAS ALREADY TAKEN
				if (hashes[h] == 1){
					exist = 1;
					break;
				}
				else {
					hashes[h] = 1;
				}
			}

			// IF THERE WAS NO COLLISIONS DETECTED
			if (exist == 0){
				// GET NUMBER OF UNIQUE HASHES
				int counter = 0;
				for (int j = 0; j < 41; ++j){
					if (hashes[j] == 1){
						++counter;
					}
				}
				// IF 31 HASH VALUES WERE GENERATED
				if ( counter > 30 ){
					std::cout << "Value detected :" << i  << std::endl;
					for (int j = 0; j < 41; ++j){
						if (hashes[j] == 1){
							std::cout << j << " ";
						}
					}
					std::cout << std::endl;
				}
			}
		}
	}

	std::cout << "[JS + DZ] Time spent solving (OMP measure) " << double(omp_get_wtime() - start) << " seconds."<< std::endl;

	return 0;
}
