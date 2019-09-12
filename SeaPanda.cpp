#include<bits/stdc++.h>
#include<iostream>

using namespace std;
template <typename T>
void printt(vector<T>& vec){cout<<"\n*********\n";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<"\n*********\n";
    AW;
}

string minimize() {

}

class SeaPanda {


	public:

	/*function that  returns a 2d vector form the csv thatis read*/
    vector<vector<string > > read_csv(string& csv_Location,char delimiter) {
		//fin is the whole stream
		fstream fin;
		//open the location to access the files
		fin.open(csv_Location, ios::in);
        vector< vector<string > > data;
		vector<string> row;
		string line, word;

		while (!fin.eof()) {
			row.clear();

			// read an entire row and
			// store it in a string variable 'line'
			getline(fin, line);
			stringstream s(line);
			// read every word from a row
			// store it in a string variable, 'word'
			while (getline(s, word,delimiter)) {
				// add all the column data
				// of a row to a vector
				if(word == "" ) {
					word = "__NULL__";
				}
                row.push_back(word);
			}
			//store each row in the data
            data.push_back(row);
    	}

    	//mostly column names are the first row
    	fin.close();
    	return data;
	}

	static vector<int> DEFAULT_VECTOR;
	vector<vector<double > > array(vector<vector<string > > data ,vector<int > ignore = DEFAULT_VECTOR) {

		vector<vector<double > > arr;

		for(int i = 0;i < ignore.size(); i++) {
			data.erase(data.begin()+ignore[i]);
		}

		for(int i=0; i<data.size();i++) {
			vector<double > row;
			for(int j=0; j < data[i].size(); j++) {
				//add exception handling here
				row.push_back(stod(data[i][j]));
			}
			arr.push_back(row);
		}
		return arr;
	}

	template <typename X>
	void head(vector<vector<X > > data) {
		if(data.size() < 11) {
			cout<<"*********************************************\n";
			for(int i = 0;i < data.size(); i++) {

				if(data[i].size() < 7) {
					for(int j = 0;j < data[i].size(); j++) {
	                	cout<<setw(10)<<data[i][j]<<"--";
	            	}
	            } else {
	            	for(int j = 0;j < 3; j++) {
	                	cout<<setw(10)<<data[i][j]<<"--";
	            	}
	            	cout<<".....";
	            	for(int j = data[i].size()-3;j < data[i].size(); j++) {
	                	cout<<setw(10)<<data[i][j]<<"--";
	            	}
	            }
            	cout<<"\n";
			}
			cout<<"*********************************************\n";
		} else {
			cout<<"*********************************************\n";
			for(int i = 0;i < 5; i++) {

				if(data[i].size() < 7) {
					for(int j = 0;j < data[i].size(); j++) {
	                	cout<<setw(10)<<data[i][j]<<" ";
	            	}
	            } else {
	            	for(int j = 0;j < 4; j++) {
	                	cout<<setw(10)<<data[i][j]<<" ";
	            	}
	            	for(int j = data[i].size()-3;j < data[i].size(); j++) {
	                	cout<<setw(10)<<data[i][j]<<" ";
	            	}
	            }
            	cout<<"\n";
			}
			cout<<".\n.\n.\n.\n.\n.\n";
			for(int i = data.size()-5;i < data.size(); i++) {

				if(data[i].size() < 7) {
					for(int j = 0;j < data[i].size(); j++) {
	                	cout<<setw(10)<<data[i][j]<<" ";
	            	}
	            } else {
	            	for(int j = 0;j < 4; j++) {
	                	cout<<setw(10)<<data[i][j]<<" ";
	            	}
	            	cout<<".....";
	            	for(int j = data[i].size()-3;j < data[i].size(); j++) {
	                	cout<<setw(10)<<data[i][j]<<" ";
	            	}
	            }
            	cout<<"\n";
			}
	        cout<<"*********************************************\n";
		}
	}
};

int main() {
	string s = "C:/Users/admin/Desktop/DESKTOP/Machine Learning/CPP ML/airports - airports.csv";
	string s2 = "C:/Users/admin/Desktop/DESKTOP/Machine Learning/Linear Regression/sample Data.txt";
	SeaPanda pd;
	auto data = pd.read_csv(s2,' ');
	pd.head(data);
	/*
	for(int i = 0;i < data.size(); i++) {

            for(int j = 0;j < data[i].size(); j++) {
                cout<<data[i][j]<<" ";
            }
            cout<<"\n";

	}

    vector<int> arr{0};

	//auto ar = pd.array(data,arr);
/*
	for(int i = 0;i < ar.size(); i++) {
        for(int j = 0;j < ar[i].size(); j++) {
            cout<<ar[i][j]*2<<" ";
        }
        cout<<"\n";
	}
*/   


    return 0;
}
