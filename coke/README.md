# coke

<https://open.kattis.com/problems/coke>

## My Thoughts

Each step or purchase of a coke is one of the following:

- Using a ten coin and returning 2 one coins
- Using a five coin and 3 one coins without any return
- Using 2 five coins and returning 2 one coins
- Using 8 one coins without any return

After each step the number of cokes purchased goes up 1 and the coins change by the given amount. The goal is to find the lowest number of coin insertions to purchase the desired number of cokes.

I can't think of a single case where it is worth it to pay with 1 ten and 3 ones in order to get back a five. The best case for this is that you already have another five and then can use that five plus the 1 you get back to use 2 coins for a coke; in total the first coke takes 4 coins (1 ten and 3 ones) and the second coke takes 2 (2 fives). But you could have alternatively used the ten to buy a coke and then the five and 3 ones to get a coke for only 5 total coins. Clearly 2 cokes for 5 coins is better than 6 coins.
