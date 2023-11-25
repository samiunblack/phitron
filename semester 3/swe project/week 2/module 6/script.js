const total = document.getElementById("total-box")
const deposit = document.getElementById("deposit-box")
const withdraw = document.getElementById("withdraw-box")

setInnerText = (element, text) => {
    element.innerText = text
}

function deposit_money(e)
{
    const previous = parseInt(deposit.innerText)
    const amount = parseInt(document.getElementById("deposit").value)
    const final = previous + amount

    setInnerText(deposit, final)
    setInnerText(total, parseInt(total.innerText) + amount)
}

function withdraw_money(e)
{
    const previous = parseInt(withdraw.innerText)
    const amount = parseInt(document.getElementById("withdraw").value)
    const final = previous + amount

    setInnerText(withdraw, final)
    setInnerText(total, parseInt(total.innerText) - amount)
}