<?php if (!empty($title)): ?>
  <h3><?php print $title . ' Etc.'?></h3>
<?php endif ?>

<div id="views-bootstrap-panel-<?php print $id ?>" class="<?php print implode(' ', $classes) ?>">
  <?php foreach ($rows as $key => $row): ?>
    <div class="panel panel-<?php print $context ?>">
      <?php if (isset($headers[$key])): ?>
        <div class="panel-heading">
          <?php if ($title_flag): ?>
            <<?php print $title_tag; ?> class="panel-title">
          <?php endif ?>
            <?php print $headers[$key] ?>
          <?php if ($title_flag): ?>          
            </<?php print $title_tag; ?>>
          <?php endif ?>
        </div>
      <?php endif ?>

      <?php if (isset($bodys[$key])): ?>
        <div class="panel-body">
          <?php print $bodys[$key] ?>
        </div>
      <?php endif ?>
      
      <?php if (isset($footers[$key])): ?>
        <div class="panel-footer">
          <?php print $footers[$key] ?>
        </div>      
      <?php endif ?>

    </div>
  <?php endforeach ?>
</div>
