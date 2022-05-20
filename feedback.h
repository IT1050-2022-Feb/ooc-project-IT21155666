// feedback .h
//IT21157578 - A.H.S.Dilsara - MLB_07.01_11
#include<iostream> //Including Header files 

using namespace std; 


	class feedback{
	private:
    	string	strFeedbackId;
        string   strFeedbackDescription;
        string   strUserId;

	public:
		Feedback();
        Feedback(string feedbackId, string feedbackDesc, string use);
        voidFeedback();
        void displayfeedbackDetails();
	   ~feedback();

};
