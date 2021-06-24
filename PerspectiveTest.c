#include <stdio.h>

int InputValidation();
void AnswerCheck(int correct, int ans);

static int score = 0;

int main() {
	int total = 1;
	int ans;
	printf("Welcome! This is a test of your ability to recognise first, second, and third person writing. \n");
	printf("After sentence enter your answer \n");
	printf("Only enter 1, 2 or 3 and then press enter. \n");
	printf("The test will now begin! \n");
	printf("-------------------------------------------------- \n");
	
	
	printf("Sentence %d: \n", total);
	printf("I think these questions should be easy to answer.");
	ans = InputValidation();
	AnswerCheck(1, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("Did you know that bamboo it is actually a grass.");
	ans = InputValidation();
	AnswerCheck(2, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	
	printf("Sentence %d: \n", total);
	printf("On Saturday afternoons, I go to the library for story time with my little sister, Tess.");
	ans = InputValidation();
	AnswerCheck(1, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("He picked up a book that had a picture of a bird on the inside and flapped the covers as if they were wings. ");
	ans = InputValidation();
	AnswerCheck(3, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("You might think that you are being kind to the  native birds and animals by giving them your  food scraps. ");
	ans = InputValidation();
	AnswerCheck(2, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("But as we walked, a small thrill was rising inside me like a bird taking off. ");
	ans = InputValidation();
	AnswerCheck(1, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("Buck did not attack, but circled him about and hedged him in with friendly advances. ");
	ans = InputValidation();
	AnswerCheck(3, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("When Harry, Minh and Jessica discover an old computer in a disused railway tunnel, they have no idea of the catastrophic potential of the data locked within its circuits. ");
	ans = InputValidation();
	AnswerCheck(3, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("Please be a friend to our native birds and animals and take your food scraps and rubbish with you. ");
	ans = InputValidation();
	AnswerCheck(2, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("I covered my mouth to keep from laughing. ");
	ans = InputValidation();
	AnswerCheck(1, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("The children’s librarian, Mr Frank, has been leading story time ever since my mum was a little girl! ");
	ans = InputValidation();
	AnswerCheck(1, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("After some time of this the wolf started off at an easy lope in a manner that plainly showed he was going somewhere. ");
	ans = InputValidation();
	AnswerCheck(3, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("You should be careful when crossing the road and make sure to look both ways. ");
	ans = InputValidation();
	AnswerCheck(2, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("Jack spent a lot of time making this test. He hopes his student does well. ");
	ans = InputValidation();
	AnswerCheck(3, ans);
	total++;
	printf("-------------------------------------------------- \n");
	
	printf("Sentence %d: \n", total);
	printf("I sure do hope Alisha is reading every night to improve her skills.");
	ans = InputValidation();
	AnswerCheck(1, ans);
	printf("-------------------------------------------------- \n");
	
	printf("The test has ended. Your score is %d of %d questions. \n", score, total);
	
	return 0;
}

int InputValidation() {
	int flag = 0, ans = 0;
	printf("\n 1. First Person \n 2. Second Person \n 3. Third Person \n Your Answer:  ");
	scanf("%d", &ans);
	while(flag == 0){
		if (ans ==  1 || ans == 2 || ans == 3) { flag = 1 ;}
			else {
				printf("Only enter 1, 2 or 3. Try again: ");
				scanf("%d", &ans);
				}
		}
	return ans;
}
	
	void AnswerCheck(int correct, int ans){
	if (ans == correct){
		score++;
	}
}
