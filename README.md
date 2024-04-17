# prismforce-assessment
**Chakravyuh Escape Algorithm**


The algorithm finds if Abhimanyu can cross the Chakravyuh keeping in mind the following conditions:-
•	 Each circle is guarded by a different enemy where the enemy is equipped with k1, k2……k11 powers Abhmanyu starts from the innermost circle with p power Abhimanyu has a boon to skip fighting the enemy a times 
•	Abhimanyu can recharge himself with power b times 
•	Battling in each circle will result in losing the same power from Abhimanyu as the enemy. 
•	If Abhimanyu enters the circle with energy less than the respective enemy, he will lose the battle
•	 k3 and k7 enemies are endured with the power to regenerate themselves once with half of their initial power and can attack Abhimanyu from behind if he is battling in iteratively next circle 

**Solution:-**

**1.	Function solve:**
•	This function takes four parameters:
•	arr: A reference to a vector representing the powers of enemies in each circle.
•	p: Initial power of Abhimanyu.
•	a: Number of times Abhimanyu can skip battling.
•	b: Number of times Abhimanyu can recharge his power.
**2.	Base Case:**
•	The function checks if a >= 11 (the number of circles). If true, it immediately returns true because Abhimanyu can skip all battles.
**3. Initialize variables required	:**
•	cur_p: Represents Abhimanyu's current power.
•	skp: Represents the remaining skips Abhimanyu can use.
•	enrg: Represents the remaining recharges Abhimanyu can perform.
**4.	Looping Through Circles:**
•	The function iterates through each circle (from 0 to 10, representing 11 circles).
•	If the current circle is 3 or 7, the enemy's power is increased by half of the previous circle's power (arr[i-1]/2).
**5.	Handling Battle Cases:**
•	If cur_p (current power) is less than the enemy's power (arr[i]):
•	If Abhimanyu has previously battled (cur_p != p), has enough initial power to recharge (p >= arr[i]), and has remaining energy to recharge (enrg > 0), he recharges his power and tries to battle again.
•	Otherwise, if he has remaining skips (skp > 0), he skips the battle.
•	If neither condition is met, Abhimanyu cannot proceed, and the function returns false.
6.**	Updating Current Power:**
•	If Abhimanyu battles (either after recharging or directly), cur_p is updated by subtracting the enemy's power (cur_p -= arr[i]).
7.	**Return Result:**
•	If Abhimanyu successfully traverses through all circles without getting stuck (return false), the function returns true.
8.	**Main Function:**
•	The main function initializes two sets of test cases (arr1, p1, a1, b1 and arr2, p2, a2, b2).
•	It calls the solve function with these test cases and prints "Yes" if Abhimanyu can cross the Chakravyuha (solve returns true) and "No" otherwise.

