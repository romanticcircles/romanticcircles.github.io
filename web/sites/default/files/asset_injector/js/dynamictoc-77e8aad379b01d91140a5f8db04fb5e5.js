/*Note: The number in item needs to change if there are more than one view in the page, depending on which view-content it is grabbing from, the code may break*/
console.log("Applying JS to TOC... ");
// var yPos = document.querySelector('.view-content').offsetTop;
// var yPos = document.documentElement.querySelectorAll('.view-content').item(1).offsetTop;
var arr = document.documentElement.querySelectorAll('.view-content')
var yPos = arr[arr.length - 1].offsetTop;
yPos = yPos - 10;
document.documentElement.style.setProperty(`--height`, `${yPos+"px"}`);

