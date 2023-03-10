// 斐波那契数 （通常用 F(n) 表示）形成的序列称为 斐波那契数列 。
// 该数列由 0 和 1 开始，后面的每一项数字都是前面两项数字的和。也就是：
// F(0) = 0，F(1) = 1
// F(n) = F(n - 1) + F(n - 2)，其中 n > 1

function fib(n: number): number {
    return n > 1 ? fib(n - 1) + fib(n - 2)
      : (n === 1 ? 1 : 0)
}

function fibWithArray(n: number): number {
    let fibArray = [0, 1];
    for (let i = 2; i <= n; i++) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }
    // console.log(fibArray)
    return fibArray[n]
}


function test() {
    for(let i = 0; i < 10; i ++) {
        console.log(`i = ${i}, fib(i) = ${fib(i)}`);
        console.log(`i = ${i}, fibWithArray(i) = ${fibWithArray(i)}`);
    }
}

test();