/*College Admissions - program checks Test Scores and Class Rank to
  determine if student is accepted to college.
  Input:  Interactive
  Output: Admission Status - Accept or Reject
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int studentId;
	int testScore;
	int classRank;

	cout << "^ ^ ^ ^ Umtipfratz University Acceptance PGM ^ ^ ^ ^\n\n";
	
	cout << "Enter Student ID or 0 to exit :";
	cin >> studentId;
	
	while (studentId != 0)
	{
		cout << "Enter Student’s Test Score :";
		cin >> testScore;
		cout << "Enter Student’s Class Rank :";
		cin >> classRank;
		
		if (testScore >= 90)
		{
			if (testScore >= 90)
			{
				if (classRank <= 150)
				{
					cout << "\n** Accept Student – Top 25 **";
				}
				else if (classRank <= 450)
				{
					cout << "Accept Student - Average";
				}
				else
				{
					cout << "Reject Student";
				}
				
			}	
		}
		else
		{
			
			if (testScore >= 80)
			{
				if (classRank <= 150)
				{
					cout << "\n** Accept Student – Top 25 **";
				}
				else if (classRank <= 400)
				{
					cout << "Accept Student - Average";
				}
				else
				{
					cout << "Reject Student";
				}
					
			}	
					
			if (testScore >= 70)
			{
				if (classRank <= 150)
				{
					cout << "\n** Accept Student – Top 25 **";
				}
				else if (classRank <= 375)
				{
					cout << "Accept Student - Average";
				}
				else
				{
					cout << "Reject Student";
				}		
						
			}	
			
		}
					
		cout << "\n\nEnter Student ID or 0 to exit :";
		cin >> studentId;
		
	}
	
    return 0;
}