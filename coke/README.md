# coke

<https://open.kattis.com/problems/coke>

## My Thoughts

Each step or purchase of a coke is one of the following:

- Using a ten coin and returning 2 one coins
- Using a five coin and 3 one coins without any return
- Using 2 five coins and returning 2 one coins
- Using 8 one coins without any return

After each step the number of cokes purchased goes up 1 and the coins change by the given amount. The goal is to find the lowest number of coin insertions to purchase the desired number of cokes.

I can't think of a single case where it is worth it to pay with 1 ten and 3 ones in order to get back a five. The best case for this is that you already have another five and then can use that five plus the 1 you get back to use 2 coins for a coke; in total the first coke takes 4 coins (1 ten and 3 ones) and the second coke takes 2 (2 fives). But you could have alternatively used the ten to buy a coke and then the five and 3 ones to get a coke for only 5 total coins. Clearly 2 cokes for 5 coins is better than 2 cokes for 6 coins.

An observation here is that the number of one coins can go up from returns but the number of ten and five coins will never go up. Thus for a solution to be valid the number of five and ten coins used must never exceed the number of five and ten coins given by the input.

I'll define the problem like this `minInsertions(c, n1, n5, n10)` where `c` is the number of cokes to be purchased, `n1` is the number of one coins, `n5` is the number of five coins, and `n10` is the number of ten coins.

(1) I think that if there is a ten coin available to purchase a coke, that that coin will always be used in the optimal solution. Thus

```minInsertions(c, n1, n5, n10) = minInsertions(c-n10, n1+2*n10, n5, 0) + n10```

(2) I think that you will never take 8 one coins to purchase a coke unless there are no five or ten coins left.

Assuming (1) and (2) are correct, the only decision to make is whether to take a five coin and 3 ones to make a purchase or 2 five coins.
