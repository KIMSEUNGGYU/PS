money = 1000 - int(input())

coins = {
    500: 0,
    100: 0,
    50: 0,
    10: 0,
    5: 0,
    1: 0
}

for coin in coins.keys():
    if money // coin:
        coins[coin] = money // coin
        money = money % coin

print(sum(coins.values()))

