function goToContributors(){
  console.log("Going to all contributors")
  var link = window.document.location.href
  link = link + "/contributors"
  window.open(link,"_self")
}

function goToComments(){
  console.log("Going to all comments")
  window.open("/drupal/Romantic-Circles-Site/web/about/comments","_self")
}