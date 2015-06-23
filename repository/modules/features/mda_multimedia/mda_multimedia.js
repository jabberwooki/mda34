(function($) {
  Drupal.behaviors.mdaMultimedia = {
    attach: function (context, settings) {

      resizeFrame();
      
      window.onresize = function(){
        resizeFrame();
      }
      
      function resizeFrame() {       
        // Original ifram width and height
        var frame_width = $('#block-views-multimedia-block-last-video iframe').width();
        var frame_height = $('#block-views-multimedia-block-last-video iframe').height();
        
        // Containing block width
        var block_width = $('#block-views-multimedia-block-last-video').width();
        aspectRatio = block_width / frame_width;
        
        $('#block-views-multimedia-block-last-video iframe').width(block_width);
        $('#block-views-multimedia-block-last-video iframe').height(Math.round(frame_height * aspectRatio));
      }
    }
  };
})(jQuery);