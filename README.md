Matrix
===================

Use [Cingulata](https://github.com/CEA-LIST/Cingulata) to build 2*2 matrix multiplication in FHE. For example:  

	[1 2] * [5 6] = [19 22]
	[3 4]   [7 8]   [43 50]

Add this folder into [Cingulata tests](https://github.com/CEA-LIST/Cingulata/tree/master/tests), then update [CMakeLists.txt](https://github.com/CEA-LIST/Cingulata/blob/master/tests/CMakeLists.txt) in `test` folder:  

	add_subdirectory(matrix)

Reference:  
[Hello world application with Cingulata](https://github.com/CEA-LIST/Cingulata/wiki/tutorial_hello).


