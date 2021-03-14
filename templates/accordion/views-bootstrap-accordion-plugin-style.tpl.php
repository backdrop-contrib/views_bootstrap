<?php if (!empty($title)): ?>

  <?php if (!empty($nested)): ?>
    <div class="parent panel panel-default">
    <div class="panel-heading">
      <h3 class="panel-title">
        <a data-toggle="collapse" href="#views-bootstrap-accordion-<?php print $id ?>">
          <?php print $title ?>
        </a>
      </h3>
    </div>
  <?php else: ?>
    <h3>
      <?php print $title ?>
    </h3>
  <?php endif ?>
<?php endif ?>


<?php if (!empty($nested)) $classes[] = 'collapse' ?>
  <div id="views-bootstrap-accordion-<?php print $id ?>"
       class="<?php print implode(' ', $classes) ?>">
    <?php foreach ($rows as $key => $row): ?>
      <?php if (isset($titles[$key])): ?>
        <div class="nested panel panel-default">
          <div class="panel-heading">
            <h4 class="panel-title">
              <a class="accordion-toggle"
                 data-toggle="collapse"
                 data-parent="#views-bootstrap-accordion-<?php print $id ?>"
                 href="#collapse-<?php print $id . '-' . $key ?>">
                <?php print $titles[$key] ?>
              </a>
            </h4>
          </div>

          <div id="collapse-<?php print $id . '-' . $key ?>"
               class="panel-collapse collapse">
            <div class="panel-body">
              <?php print $row ?>
            </div>
          </div>
        </div>
      <?php endif ?>
    <?php endforeach ?>
  </div>

<?php if (!empty($nested) && !empty($title)): ?>
  </div>
<?php endif ?>
