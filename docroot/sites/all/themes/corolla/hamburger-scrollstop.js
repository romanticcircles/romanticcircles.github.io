// Adapted from http://stackoverflow.com/questions/8653025/stop-fixed-position-at-footer

jQuery(document).ready(function($) {
$(window).scroll(function () { 

// distance from top of footer to top of document
footertotop = ($('#footer-wrapper').position().top);
// distance user has scrolled from top, adjusted to take in height of sidebar (570 pixels inc. padding)
scrolltop = $(document).scrollTop()+300;
// difference between the two
difference = scrolltop-footertotop;

// if user has scrolled further than footer,
// pull sidebar up using a negative margin

if (scrolltop > footertotop) {

$('#gn-menu').css('margin-top',  0-difference);
}

else  {
$('#gn-menu').css('margin-top', 0);
}


});
});