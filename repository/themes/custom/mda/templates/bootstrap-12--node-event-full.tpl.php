<?php
/**
 * @file
 * Bootstrap 12 template for Display Suite.
 */
setlocale (LC_TIME, 'fr_FR.utf8'); 


//echo '<pre>';
//var_dump($node);
//var_dump($content);
//echo '</pre>';

//Récupère la date de début au format Date
$date_debut = strtotime($node->field_event_dates["und"][0]['value']);
$date_fin = strtotime($node->field_event_dates["und"][0]['value2']);

$maDate= strtotime($node->field_event_dates["und"][0]['value']);
$tz_offset = strtotime(date("M d Y H:i:s")) - strtotime(gmdate("M d Y H:i:s"));
$maDate += $tz_offset;
$date = format_date($maDate, 'custom', 'H:i');

?>
<div class="entete">
<div class="calendar">
<div class="header"><?php echo strftime("%A", $date_debut); ?></div>
<div class="num-day"><?php echo date("d", $date_debut); ?></div>
<div class="mois"><?php echo strftime("%b %Y", $date_debut); ?></div>
</div>




<h4><?php print render($content['field_event_type'][0]['#markup']);?></h4>
<h4><?php print render($content['field_address'][0]['#address']['locality']);?> - <?php echo $date ?></h4></h4>

<div>Organisateur : <strong><?php print render($content['field_organiser'][0]['#markup']);?> / <?php print render($content['field_unregistered_organiser']['#items'][0]['value']);?></strong></div>
<div>Public : <strong><?php print render($content['field_public'][0]['#markup']);?></strong></div>
</div>
<hr>
<div>
<?php print render($content['field_event_image']);?>
</div>

<div>
<?php print render($content['body']['#items'][0]['value']);?>
</div>
<br>
<div class="clearfix"></div>
<div id="accordion" class="panel-group">

        <div class="panel panel-default">

            <div class="panel-heading">

                <h4 class="panel-title">

                    <a data-toggle="collapse" data-parent="#accordion" href="#collapseOne">Adresse</a>

                </h4>

            </div>

            <div id="collapseOne" class="panel-collapse collapse">

                <div class="panel-body">
<?php print render($content['field_address'][0]['#address']['thoroughfare']);?><br>
<?php print render($content['field_address'][0]['#address']['postal_code']);?>&nbsp
<?php print render($content['field_address'][0]['#address']['locality']);?><br>
<?php print render($content['field_coordinates']['#items'][0]['geom']);?>




                </div>

            </div>

        </div>

        <div class="panel panel-default">

            <div class="panel-heading">

                <h4 class="panel-title">

                    <a data-toggle="collapse" data-parent="#accordion" href="#collapseTwo">Localisation</a>

                </h4>

            </div>

            <div id="collapseTwo" class="panel-collapse collapse in">

                <div class="panel-body">

<?php print render($content['field_coordinates']);?>
                </div>

            </div>

        </div>

        <div class="panel panel-default">

            <div class="panel-heading">

                <h4 class="panel-title">

                    <a data-toggle="collapse" data-parent="#accordion" href="#collapseThree">Commentaires</a>

                </h4>

            </div>

            <div id="collapseThree" class="panel-collapse collapse in">

                <div class="panel-body">

<?php print render($content['disqus_comment'][0]['#markup']);?>
                </div>

            </div>

        </div>

    </div>

<?php print render($content['sharethis']['#value']);?>



















<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
