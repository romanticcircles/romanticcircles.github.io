function otherDHFilterToggle(button){
  var filter_block_id = "views-exposed-form-other-digital-humanities-view-block-2";
  filterToggle(button, filter_block_id)
}

function conferenceReviewFilterToggle(button){
  var filter_block_id = "views-exposed-form-r-r-review-search-block-2";
  filterToggle(button, filter_block_id)
}
function reviewFilterToggle(button){
  var filter_block_id = "views-exposed-form-r-r-review-search-block-1";
  filterToggle(button, filter_block_id)
}
function primaryAuthorFilterToggle(button){
  var filter_block_id = "views-exposed-form-primary-authors-block-1";
  filterToggle(button, filter_block_id)
}

function praxisFilterToggle(button){
  var filter_block_id = "views-exposed-form-praxis-view-block-2";
  filterToggle(button, filter_block_id)
}

function pedagogiesFilterToggle(button){
  var filter_block_id = "views-exposed-form-pedagogies-view1-block-2";
  filterToggle(button, filter_block_id)
}

function editionsFilterToggle(button){
  var filter_block_id = "views-exposed-form-editions--block-2";
  filterToggle(button, filter_block_id)
}

function peopleFilterToggle(button){
  var filter_block_id = "views-exposed-form-rc-people-block-1";
  filterToggle(button, filter_block_id)
}

// Gallery
function galleryExploreExhibitsFilterToggle(button){
  var filter_block_id = "views-exposed-form-gallery-explore-all-exhibits-block-1";
  filterToggle(button, filter_block_id)
}
function galleryExploreImagesFilterToggle(button){
  var filter_block_id = "views-exposed-form-gallery-explore-all-images-block-1";
  filterToggle(button, filter_block_id)
}

function filterToggle(button, filter_block){
  button.classList.toggle("active");
  var content = document.getElementById(filter_block);
  console.log("Content: ")
  console.log(content)
  if (content.style.display === "block") {
    content.style.display = "none";
  } else {
    content.style.display = "block";
  }
}