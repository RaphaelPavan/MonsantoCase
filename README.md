# MonsantoCase

For Mr. Bruno T. Nascimento:
    Hey Bruno, here is my solution for the case you sent me. 

To solve the problem, I looked for a solution where no useless comparisons were to be made. I take both of the strings and first of all I compare if the P string I am looking at is not smaller than the V string I'm trying to find in it. Then, I compare both strings and count the misplaced genes up to two. If it reaches two, the loop is broken and the index is not printed. Then, it goes to the next P character and does it all again. If everyone of them fail, a flag is not set and it prints "No Match". If any of the sub-strings is a match with a maximun of 1 mismatch, the index to the initial character of the sub-string is printed.

    I have to say it is not as good as I expected but it is my best. I just started my algorithm analysis classes and I still don't know much about those concepts, you know? But I ask you to get to know me better because I am a wonderful worker and I have lots of experiences you won't find with any other person from our area. Actually, I haven't had much time to dedicated myself to computing subjects because there has been already some time that I've been working to sustain myself without asking any help from my family. Although I wanted to work with computing and things from my area, Unicamp didn't let me take any of the two internship jobs I got last year and that made me go to other areas such as giving English classes and etc. That's why I want this oportunity so much (at least just to show more of myself), so I can learn more about the profession I've chosen and to show my work and my will to learn and do things as best as they can be done.
    Sorry for the long text but I gotta say that I really want to go further into this oportunity.
    Thank you and that's it:

Resolution of an Internship case.
 *   What is the O() complexity of your solution? -->
    The O() complexity is O(v*p) being v the size of the virus' DNA string and p the person's one.   
    Explanation: As I have a loop while inside the for loop, the maximum times the internal loop is going to be run is equal to the v String lenght. As it is run P string lenght times, the complexity is around p*v. Although I used strlen to calculate the size of the strings, it is worst case is linear in p or v (for each case) and it sums up with the rest of the loops (p+v+p*v). But as we know, the O() complexity is taken based on the equation which multiplied by some constant is higher than the one we got from the algorithm starting from some n0. That means, the algorithm has a complexity full of other stuff but goes below p*v*constant therefore, O(p*v) is a suitable answer.
    
 *   How can you improve your existing solution? If that is possible, what would your new solution's O() complexity be? -->
    It's possible to improve my solution by division and conquer, maybe. If I had time to program a full binary-tree program maybe I could get the complexity to O(p*log(p)) or something.
    
 *   What is the complexity class  (P, NP, NP-complete, etc) of this problem ? -->
    I believe the problem is a P complex problem because it is really simple and there are ways to solve it with less than n² complexity.
    
    
