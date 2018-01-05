Matrix
===================

Use [Cingulata](https://github.com/CEA-LIST/Cingulata) to build 2*2 matrix multiplication in FHE. For example:  

	[1 2] * [5 6] = [19 22]
	[3 4]   [7 8]   [43 50]

Add this folder into [Cingulata tests](https://github.com/CEA-LIST/Cingulata/tree/master/tests), then update [CMakeLists.txt](https://github.com/CEA-LIST/Cingulata/blob/master/tests/CMakeLists.txt) in `test` folder:  

	add_subdirectory(matrix)

P.S. you should update [NR_THREADS](https://github.com/NanXiao/matrix/blob/3f40d92874eb89613e9d649f920a3d1f38ab0aae/run.sh#L40) to improve performance, e.g., 32.

Reference:  
[Hello world application with Cingulata](https://github.com/CEA-LIST/Cingulata/wiki/tutorial_hello).


