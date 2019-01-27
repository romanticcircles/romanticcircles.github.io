jQuery(document).ready(function($) {
var linkOrder = [
    "edit-shs-term-node-tid-depth-select-1",
    "edit-taxonomy-vocabulary-3-tid-selective"
];
$('select.form-select').not('#' + linkOrder[0]).attr('disabled', 'disabled');
$('.form-select').change(function(){
    var id = $(this).attr('id');
    var index = $.inArray(id, linkOrder);
    $('#' + linkOrder[index+1]).removeAttr('disabled');
});
});