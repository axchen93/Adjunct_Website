const left = document.querySelector('.left');/*Assigns left to the left id in html */
const right = document.querySelector('.right');/*Assigns right to the right id in html */
const container = document.querySelector('.container');/*Assigns container to the container id in html */

/*When the move enters the left side, call the hoverLeft in css*/
left.addEventListener('mouseenter', ()=>{
    container.classList.add('hoverLeft');
})
/*When the move leaves the left side, end call to hoverLeft in css*/
left.addEventListener('mouseleave', ()=>{
    container.classList.remove('hoverLeft');
})

/*When the move enters the right side, call the hoverRight in css*/
right.addEventListener('mouseenter', ()=>{
    container.classList.add('hoverRight');
})
/*When the move leaves the lefrightt side, end call to hoverRight in css*/
right.addEventListener('mouseleave', ()=>{
    container.classList.remove('hoverRight');
})
