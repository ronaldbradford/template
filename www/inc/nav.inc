  <div class="navbar navbar-inverse navbar-fixed-top">
    <div class="navbar-inner">
      <div class="container">
        <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </a>
        <a class="brand" href="#">Your Company</a>
        <div class="nav-collapse">
          <ul class="nav">
            <li class="divider-vertical"></li>
            <li <? if ($nav == 'home') echo 'class="active"';?>><a href="/">Home</a></li>
            <li class="divider-vertical"></li>
            <li <? if ($nav == 'option2') echo 'class="active"';?>><a href="#">Option 2</a></li>
            <li class="divider-vertical"></li>
            <li <? if ($nav == 'option3') echo 'class="active"';?>><a href="#">Option 3</a></li>
            <li class="divider-vertical"></li>
            <li <? if ($nav == 'option4') echo 'class="active"';?>><a href="#">Option 4</a></li>
            <li class="divider-vertical"></li>
            <li <? if ($nav == 'login') echo 'class="active"';?>><a href="/login">Login</a></li>
            <li class="divider-vertical"></li>
          </ul>
        </div><!--/.nav-collapse -->
      </div> <!--container -->
    </div> <!--navbar-inner-->
  </div> <!--navbar-->

