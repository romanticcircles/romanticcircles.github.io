var coll = document.getElementsByClassName("collapse_button");
var i;
console.log("running");
console.log(coll);

for (i = 0; i < coll.length; i++) {
  coll[i].addEventListener("click", function() {
    this.classList.toggle("active");
    var id = this.id;
    console.log("This id: " +id);
    var content = document.getElementsByClassName("collapse_content")[id];
    if (content.style.display === "block") {
      content.style.display = "none";
    } else {
      content.style.display = "block";
    }
  });
}