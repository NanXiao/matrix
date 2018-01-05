/*
    (C) Copyright 2017 CEA LIST. All Rights Reserved.
    Contributor(s): Cingulata team (formerly Armadillo team)

    This software is governed by the CeCILL-C license under French law and
    abiding by the rules of distribution of free software.  You can  use,
    modify and/ or redistribute the software under the terms of the CeCILL-C
    license as circulated by CEA, CNRS and INRIA at the following URL
    "http://www.cecill.info".

    As a counterpart to the access to the source code and  rights to copy,
    modify and redistribute granted by the license, users are provided only
    with a limited warranty  and the software's author,  the holder of the
    economic rights,  and the successive licensors  have only  limited
    liability.

    The fact that you are presently reading this means that you have had
    knowledge of the CeCILL-C license and that you accept its terms.
*/

/* compiler includes */
#include <iostream>
#include <fstream>
#include <vector>

/* local includes */
#include <integer.hxx>

/* namespaces */
using namespace std;

int main()
{
	vector<vector<Integer8>> a(2, vector<Integer8>(2));
	vector<vector<Integer8>> b(2, vector<Integer8>(2));
	vector<vector<Integer8>> c(2, vector<Integer8>(2));
	
	cin >> a[0][0];
	cin >> a[0][1];
	cin >> a[1][0];
	cin >> a[1][1];
	cin >> b[0][0];
	cin >> b[0][1];
	cin >> b[1][0];
	cin >> b[1][1];
	
	for (vector<vector<Integer8>>::size_type row = 0; row < a.size(); row++) {
		for (vector<Integer8>::size_type col = 0; col < b[row].size(); col++) {
			c[row][col] = 0;
			for (vector<Integer8>::size_type i = 0; i < a[row].size(); i++) {
				c[row][col] += a[row][i] * b[i][col];
			}
		}
	}

	for (vector<vector<Integer8>>::size_type row = 0; row < a.size(); row++) {
		for (vector<Integer8>::size_type col = 0; col < b[row].size(); col++) {
			cout << c[row][col];
		}
	}
	
	FINALIZE_CIRCUIT("matrix.blif");
}

