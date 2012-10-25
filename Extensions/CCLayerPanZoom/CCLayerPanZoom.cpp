<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en">
<head>
<meta http-equiv="content-type" content="text/html; charset=utf-8" />
<title>Cocos2d-x | CCLayerPanZoom.cpp</title>
<meta name="description" content="cocos2d-x is a cross platform open source free 2D game engine for mobile gamedev, that is fast and stable, easy to learn and use" />
<meta name="keywords" content="cocos2d-x,cocos2d,game engine,opengl,cross,multi,platform,iphone,ipad,android,windows,metro,bada,marmalade,playbook" />
<meta name="csrf-param" content="authenticity_token"/>
<meta name="csrf-token" content="gra7rO0+uhWGrqumCz/iiQFt5UR8zqIiprqCdSqmsCk="/>
<script type="text/javascript">
//<![CDATA[
window.__CF=window.__CF||{};window.__CF.AJS={"ga_key":{"ua":"UA-3216502-3","ga_bs":"2"},"vig_key":{"sid":"d654e26afef9085d79aba37dfe97be28"}};
//]]>
</script>
<script type="text/javascript">
//<![CDATA[
try{if (!window.CloudFlare) { var CloudFlare=[{verbose:0,p:0,byc:0,owlid:"cf",mirage:{responsive:0,lazy:0},oracle:0,paths:{cloudflare:"/cdn-cgi/nexp/aav=1870252173/"},atok:"3751d4ba65f9b2d46a156f8769ac6937",zone:"cocos2d-x.org",rocket:"0",apps:{"ga_key":{"ua":"UA-3216502-3","ga_bs":"2"},"vig_key":{"sid":"d654e26afef9085d79aba37dfe97be28"}}}];var a=document.createElement("script"),b=document.getElementsByTagName("script")[0];a.async=!0;a.src="//ajax.cloudflare.com/cdn-cgi/nexp/aav=4114775854/cloudflare.min.js";b.parentNode.insertBefore(a,b);}}catch(e){};
//]]>
</script>
<link rel='shortcut icon' href='http://files.cocos2d-x.org/favicon.ico?1325350351' />
<link href="http://files.cocos2d-x.org/themes/cocos2dx_blue/stylesheets/application.css?1347614658" media="all" rel="stylesheet" type="text/css" />

<link href="http://files.cocos2d-x.org/stylesheets/coderay.css?1347592803" media="all" rel="stylesheet" type="text/css" />
<script type="text/javascript" src="http://w.sharethis.com/button/buttons.js"></script>
<script type="text/javascript">stLight.options({publisher: "d7067c60-ba30-40ba-a7db-6db0699b48d6"}); </script>
<script src="http://files.cocos2d-x.org/javascripts/prototype.js?1325230646" type="text/javascript"></script>
<script src="http://files.cocos2d-x.org/javascripts/effects.js?1325230646" type="text/javascript"></script>
<script src="http://files.cocos2d-x.org/javascripts/dragdrop.js?1325230646" type="text/javascript"></script>
<script src="http://files.cocos2d-x.org/javascripts/controls.js?1325230646" type="text/javascript"></script>
<script src="http://files.cocos2d-x.org/javascripts/application.js?1325230646" type="text/javascript"></script>
<script type="text/javascript">
//<![CDATA[
Event.observe(window, 'load', function(){ new WarnLeavingUnsaved('Die aktuellen Änderungen gehen verloren, wenn Sie diese Seite verlassen.'); });
//]]>
</script>

<!--[if IE 6]>
    <style type="text/css">
      * html body{ width: expression( document.documentElement.clientWidth < 900 ? '900px' : '100%' ); }
      body {behavior: url(http://files.cocos2d-x.org/stylesheets/csshover.htc?1325230646);}
    </style>
<![endif]-->
<link href="http://files.cocos2d-x.org/plugin_assets/redmine_ads/stylesheets/redmine_ads.css?1325230646" media="screen" rel="stylesheet" type="text/css" /> <style type="text/css">#admin-menu a.contacts { background-image: url('http://files.cocos2d-x.org/plugin_assets/redmine_contacts/images/vcard.png?1350809807'); }</style> 
  
  

  <link href="http://files.cocos2d-x.org/plugin_assets/redmine_wiki_extensions/stylesheets/wiki_extensions.css?1325230646" media="screen" rel="stylesheet" type="text/css" />
  <script src="http://files.cocos2d-x.org/plugin_assets/redmine_wiki_extensions/javascripts/wiki_extensions.js?1325230646" type="text/javascript"></script>
  


<!-- page specific tags -->
    <link href="http://files.cocos2d-x.org/stylesheets/scm.css?1325230646" media="screen" rel="stylesheet" type="text/css" /><script type="text/javascript">
/* <![CDATA[ */
var _gaq = _gaq || [];
_gaq.push(['_setAccount', 'UA-3216502-3']);
_gaq.push(['_trackPageview']);

(function() {
var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
})();

(function(b){(function(a){"__CF"in b&&"DJS"in b.__CF?b.__CF.DJS.push(a):"addEventListener"in b?b.addEventListener("load",a,!1):b.attachEvent("onload",a)})(function(){"FB"in b&&"Event"in FB&&"subscribe"in FB.Event&&(FB.Event.subscribe("edge.create",function(a){_gaq.push(["_trackSocial","facebook","like",a])}),FB.Event.subscribe("edge.remove",function(a){_gaq.push(["_trackSocial","facebook","unlike",a])}),FB.Event.subscribe("message.send",function(a){_gaq.push(["_trackSocial","facebook","send",a])}));"twttr"in b&&"events"in twttr&&"bind"in twttr.events&&twttr.events.bind("tweet",function(a){if(a){var b;if(a.target&&a.target.nodeName=="IFRAME")a:{if(a=a.target.src){a=a.split("#")[0].match(/[^?=&]+=([^&]*)?/g);b=0;for(var c;c=a[b];++b)if(c.indexOf("url")===0){b=unescape(c.split("=")[1]);break a}}b=void 0}_gaq.push(["_trackSocial","twitter","tweet",b])}})})})(window);
/* ]]> */
</script>
</head>
<body class="theme-Cocos2dx blue controller-attachments action-show">
<div id="wrapper">
<div id="wrapper2">
<div id="top-menu">
    <div id="account">
        <ul><li><a href="/login" class="login">Anmelden</a></li>
<li><a href="/account/register" class="register">Registrieren</a></li></ul>    </div>
    
    <ul><li><a href="/" class="home">Hauptseite</a></li>
<li><a href="/projects" class="projects">Projekte</a></li>
<li><a href="http://www.redmine.org/guide" class="help">Hilfe</a></li></ul></div>

<div id="header">
    
    <!-- 2dx banner, walzer add -->
    <div id="banner-left">
        <img src="/images/banner-left.png"/>
    </div>
    <div id="banner-right">
        <img src="/images/banner-right.png" align="right"/>
    </div>
    
    <!-- <h1>cocos2d-x</h1> -->

    
    <div id="main-menu-bg"></div>
    <div id="main-menu">
        <ul><li><a href="/projects/cocos2d-x/news" class="news">News</a></li>
<li><a href="/projects/cocos2d-x/roadmap" class="roadmap">Roadmap</a></li>
<li><a href="/projects/cocos2d-x/issues" class="issues">Tickets</a></li>
<li><a href="/projects/cocos2d-x/wiki" class="wiki">Wiki</a></li>
<li><a href="/wiki_extensions/forward_wiki_page/cocos2d-x?menu_id=1" class="wiki-extensions1">Download</a></li>
<li><a href="/wiki_extensions/forward_wiki_page/cocos2d-x?menu_id=2" class="wiki-extensions2">Reference</a></li>
<li><a href="/projects/cocos2d-x/boards" class="boards">Foren</a></li>
<li><a href="/projects/cocos2d-x/assets" class="assets">Extensions</a></li>
<li><a href="/projects/cocos2d-x/apps" class="apps">Games</a></li></ul>
    </div>
    

    
    <div id="quick-search">
        <form action="/search/index/cocos2d-x" method="get">
        
        <label for='q'>
          <a href="/search/index/cocos2d-x" accesskey="4">Suche</a>:
        </label>
        <input accesskey="f" class="small" id="q" name="q" size="20" type="text" />
        </form>
        <!--  -->
    </div>
    
</div>

<div class="nosidebar" id="main">
    <div id="sidebar">
        
        <div class="redmine_ads"><br/>
<!- important links -->
<h3>Stable Releases</h3>
<ul>
   <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-2.0-x-2.0.3.zip">2.0.3 (2012-09-26)</a></li>
   <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-2.0-x-2.0.2.zip">2.0.2 (2012-08-30)</a></li>
  <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-2.0-rc2-x-2.0.1.zip">2.0.1 (2012-06-29)</a></li>
  <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-2.0-rc0a-x-2.0.zip">2.0 (2012-05-31)</a></li>
  <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-1.0.1-x-0.13.0-beta.zip">0.13.0-beta (2012-03-29)</a></li>
  <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-1.0.1-x-0.12.0.zip">0.12.0 (2012-03-05)</a></li>
</ul>
<hr>


<!-- follow us -->
<h3>Follow us</h3>
<ul>
  <li><a href="http://twitter.com/cocos2dx/">Twitter</a></li>
  <li><a href="http://weibo.com/cocos2dx/">Weibo</a></li>
</ul>
<hr>


<!-- here's clustrmaps -->
<h3>Visitors</h3>
<ul><li>
<a href="http://www3.clustrmaps.com/counter/maps.php?url=http://www.cocos2d-x.org" id="clustrMapsLink"><img src="http://www3.clustrmaps.com/counter/index2.php?url=http://www.cocos2d-x.org" style="border:0px;" alt="Locations of visitors to this page" title="Locations of visitors to this page" id="clustrMapsImg" onerror="this.onerror=null; this.src='http://www2.clustrmaps.com/images/clustrmaps-back-soon.jpg'; document.getElementById('clustrMapsLink').href='http://www2.clustrmaps.com';" />
</a>
</li></ul>
<hr>


<!-- freindly links -->
<h3>Friends</h3>
<ul>
    <li><a href="http://www.cocos2d-iphone.org">cocos2d-iphone</a></li>
    <li><a href="http://www.levelhelper.org">LevelHelper</a></li>
</ul>
<hr>


<!-- here's the google analytics code -->
<script type="text/javascript">/* CloudFlare analytics upgrade */
</script></div>
    </div>

    <div id="content">
        
        <h2>CCLayerPanZoom.cpp</h2>

<div class="attachments">
<p>
   <span class="author"><a href="/users/5650">Andreas Baumann</a>, 2012-10-25 16:47</span></p>
<p><a href="/attachments/download/1305/CCLayerPanZoom.cpp">Download</a>   <span class="size">(24,6 KB)</span></p>

</div>
&nbsp;
<div class="autoscroll">
<table class="filecontent syntaxhl">
<tbody>


  <tr>
    <th class="line-num" id="L1">
      <a href="#L1">1</a>
    </th>
    <td class="line-code">
      <pre><span class="comment">/*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L2">
      <a href="#L2">2</a>
    </th>
    <td class="line-code">
      <pre>* CCLayerPanZoom
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L3">
      <a href="#L3">3</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L4">
      <a href="#L4">4</a>
    </th>
    <td class="line-code">
      <pre>* Copyright (c) 2011 Alexey Lang
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L5">
      <a href="#L5">5</a>
    </th>
    <td class="line-code">
      <pre>* Copyright (c) 2011 Pavel Guganov
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L6">
      <a href="#L6">6</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L7">
      <a href="#L7">7</a>
    </th>
    <td class="line-code">
      <pre>* http://www.cocos2d-x.org
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L8">
      <a href="#L8">8</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L9">
      <a href="#L9">9</a>
    </th>
    <td class="line-code">
      <pre>* Permission is hereby granted, free of charge, to any person obtaining a copy
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L10">
      <a href="#L10">10</a>
    </th>
    <td class="line-code">
      <pre>* of this software and associated documentation files (the &quot;Software&quot;), to deal
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L11">
      <a href="#L11">11</a>
    </th>
    <td class="line-code">
      <pre>* in the Software without restriction, including without limitation the rights
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L12">
      <a href="#L12">12</a>
    </th>
    <td class="line-code">
      <pre>* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L13">
      <a href="#L13">13</a>
    </th>
    <td class="line-code">
      <pre>* copies of the Software, and to permit persons to whom the Software is
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L14">
      <a href="#L14">14</a>
    </th>
    <td class="line-code">
      <pre>* furnished to do so, subject to the following conditions:
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L15">
      <a href="#L15">15</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L16">
      <a href="#L16">16</a>
    </th>
    <td class="line-code">
      <pre>* The above copyright notice and this permission notice shall be included in
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L17">
      <a href="#L17">17</a>
    </th>
    <td class="line-code">
      <pre>* all copies or substantial portions of the Software.
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L18">
      <a href="#L18">18</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L19">
      <a href="#L19">19</a>
    </th>
    <td class="line-code">
      <pre>* THE SOFTWARE IS PROVIDED &quot;AS IS&quot;, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L20">
      <a href="#L20">20</a>
    </th>
    <td class="line-code">
      <pre>* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L21">
      <a href="#L21">21</a>
    </th>
    <td class="line-code">
      <pre>* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L22">
      <a href="#L22">22</a>
    </th>
    <td class="line-code">
      <pre>* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L23">
      <a href="#L23">23</a>
    </th>
    <td class="line-code">
      <pre>* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L24">
      <a href="#L24">24</a>
    </th>
    <td class="line-code">
      <pre>* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L25">
      <a href="#L25">25</a>
    </th>
    <td class="line-code">
      <pre>* THE SOFTWARE.
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L26">
      <a href="#L26">26</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L27">
      <a href="#L27">27</a>
    </th>
    <td class="line-code">
      <pre>*/</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L28">
      <a href="#L28">28</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L29">
      <a href="#L29">29</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&quot;CCLayerPanZoom.h&quot;</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L30">
      <a href="#L30">30</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L31">
      <a href="#L31">31</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L32">
      <a href="#L32">32</a>
    </th>
    <td class="line-code">
      <pre>USING_NS_CC;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L33">
      <a href="#L33">33</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L34">
      <a href="#L34">34</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::setMaxScale(<span class="predefined-type">float</span> maxScale)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L35">
      <a href="#L35">35</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L36">
      <a href="#L36">36</a>
    </th>
    <td class="line-code">
      <pre>    _maxScale = maxScale;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L37">
      <a href="#L37">37</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">this</span>-&gt;setScale(MIN(<span class="directive">this</span>-&gt;getScale(), _maxScale));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L38">
      <a href="#L38">38</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L39">
      <a href="#L39">39</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L40">
      <a href="#L40">40</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">float</span> CCLayerPanZoom::maxScale()
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L41">
      <a href="#L41">41</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L42">
      <a href="#L42">42</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> _maxScale;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L43">
      <a href="#L43">43</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L44">
      <a href="#L44">44</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L45">
      <a href="#L45">45</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::setMinScale(<span class="predefined-type">float</span> minScale)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L46">
      <a href="#L46">46</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L47">
      <a href="#L47">47</a>
    </th>
    <td class="line-code">
      <pre>    _minScale = minScale;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L48">
      <a href="#L48">48</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">this</span>-&gt;setScale(MAX(<span class="directive">this</span>-&gt;getScale(), minScale));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L49">
      <a href="#L49">49</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L50">
      <a href="#L50">50</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L51">
      <a href="#L51">51</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">float</span> CCLayerPanZoom::minScale()
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L52">
      <a href="#L52">52</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L53">
      <a href="#L53">53</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> _minScale;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L54">
      <a href="#L54">54</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L55">
      <a href="#L55">55</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L56">
      <a href="#L56">56</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::setRubberEffectRatio(<span class="predefined-type">float</span> rubberEffectRatio)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L57">
      <a href="#L57">57</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L58">
      <a href="#L58">58</a>
    </th>
    <td class="line-code">
      <pre>    _rubberEffectRatio = rubberEffectRatio;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L59">
      <a href="#L59">59</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L60">
      <a href="#L60">60</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// Avoid turning rubber effect On in frame mode.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L61">
      <a href="#L61">61</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (_mode == kCCLayerPanZoomModeFrame)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L62">
      <a href="#L62">62</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L63">
      <a href="#L63">63</a>
    </th>
    <td class="line-code">
      <pre>        CCLOGERROR(<span class="string"><span class="delimiter">&quot;</span><span class="content">CCLayerPanZoom#setRubberEffectRatio: rubber effect is not supported in frame mode.</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L64">
      <a href="#L64">64</a>
    </th>
    <td class="line-code">
      <pre>        _rubberEffectRatio = <span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L65">
      <a href="#L65">65</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L66">
      <a href="#L66">66</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L67">
      <a href="#L67">67</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L68">
      <a href="#L68">68</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L69">
      <a href="#L69">69</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">float</span> CCLayerPanZoom::rubberEffectRatio()
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L70">
      <a href="#L70">70</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L71">
      <a href="#L71">71</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> _rubberEffectRatio;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L72">
      <a href="#L72">72</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L73">
      <a href="#L73">73</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L74">
      <a href="#L74">74</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L75">
      <a href="#L75">75</a>
    </th>
    <td class="line-code">
      <pre>CCLayerPanZoom* CCLayerPanZoom::layer()
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L76">
      <a href="#L76">76</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L77">
      <a href="#L77">77</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// 'layer' is an autorelease object</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L78">
      <a href="#L78">78</a>
    </th>
    <td class="line-code">
      <pre>    CCLayerPanZoom *layer = CCLayerPanZoom::create();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L79">
      <a href="#L79">79</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L80">
      <a href="#L80">80</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// return the scene</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L81">
      <a href="#L81">81</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> layer;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L82">
      <a href="#L82">82</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L83">
      <a href="#L83">83</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L84">
      <a href="#L84">84</a>
    </th>
    <td class="line-code">
      <pre><span class="comment">// on &quot;init&quot; you need to initialize your instance</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L85">
      <a href="#L85">85</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">bool</span> CCLayerPanZoom::init()
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L86">
      <a href="#L86">86</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L87">
      <a href="#L87">87</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// 1. super init first</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L88">
      <a href="#L88">88</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> ( !<span class="local-variable">CCLayer</span>::init() )
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L89">
      <a href="#L89">89</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L90">
      <a href="#L90">90</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> <span class="predefined-constant">false</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L91">
      <a href="#L91">91</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L92">
      <a href="#L92">92</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L93">
      <a href="#L93">93</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">//m_bIsRelativeAnchorPoint = true;</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L94">
      <a href="#L94">94</a>
    </th>
    <td class="line-code">
      <pre>    m_bIsTouchEnabled = <span class="predefined-constant">true</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L95">
      <a href="#L95">95</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L96">
      <a href="#L96">96</a>
    </th>
    <td class="line-code">
      <pre>    _maxScale = <span class="float">3</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L97">
      <a href="#L97">97</a>
    </th>
    <td class="line-code">
      <pre>    _minScale = <span class="float">0</span><span class="float">.7f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L98">
      <a href="#L98">98</a>
    </th>
    <td class="line-code">
      <pre>    _touches = <span class="local-variable">CCArray</span>::createWithCapacity(<span class="integer">10</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L99">
      <a href="#L99">99</a>
    </th>
    <td class="line-code">
      <pre>    _touches-&gt;retain();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L100">
      <a href="#L100">100</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L101">
      <a href="#L101">101</a>
    </th>
    <td class="line-code">
      <pre>    _panBoundsRect = CCRectZero;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L102">
      <a href="#L102">102</a>
    </th>
    <td class="line-code">
      <pre>    _touchDistance = <span class="float">0</span><span class="float">.0F</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L103">
      <a href="#L103">103</a>
    </th>
    <td class="line-code">
      <pre>    _maxTouchDistanceToClick = <span class="integer">31</span><span class="float">5</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L104">
      <a href="#L104">104</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L105">
      <a href="#L105">105</a>
    </th>
    <td class="line-code">
      <pre>    _mode = kCCLayerPanZoomModeSheet;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L106">
      <a href="#L106">106</a>
    </th>
    <td class="line-code">
      <pre>    _minSpeed = <span class="integer">10</span><span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L107">
      <a href="#L107">107</a>
    </th>
    <td class="line-code">
      <pre>    _maxSpeed = <span class="integer">100</span><span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L108">
      <a href="#L108">108</a>
    </th>
    <td class="line-code">
      <pre>    _topFrameMargin = <span class="integer">10</span><span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L109">
      <a href="#L109">109</a>
    </th>
    <td class="line-code">
      <pre>    _bottomFrameMargin = <span class="integer">10</span><span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L110">
      <a href="#L110">110</a>
    </th>
    <td class="line-code">
      <pre>    _leftFrameMargin = <span class="integer">10</span><span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L111">
      <a href="#L111">111</a>
    </th>
    <td class="line-code">
      <pre>    _rightFrameMargin = <span class="integer">10</span><span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L112">
      <a href="#L112">112</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L113">
      <a href="#L113">113</a>
    </th>
    <td class="line-code">
      <pre>    _rubberEffectRatio = <span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L114">
      <a href="#L114">114</a>
    </th>
    <td class="line-code">
      <pre>    _rubberEffectRecoveryTime = <span class="float">0</span><span class="float">.2f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L115">
      <a href="#L115">115</a>
    </th>
    <td class="line-code">
      <pre>    _rubberEffectRecovering = <span class="predefined-constant">false</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L116">
      <a href="#L116">116</a>
    </th>
    <td class="line-code">
      <pre>    _rubberEffectZooming = <span class="predefined-constant">false</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L117">
      <a href="#L117">117</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L118">
      <a href="#L118">118</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> <span class="predefined-constant">true</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L119">
      <a href="#L119">119</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L120">
      <a href="#L120">120</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L121">
      <a href="#L121">121</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::ccTouchesBegan(cocos2d::CCSet *pTouches, cocos2d::<span class="local-variable">CCEvent</span> *pEvent){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L122">
      <a href="#L122">122</a>
    </th>
    <td class="line-code">
      <pre>    CCTouch *pTouch;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L123">
      <a href="#L123">123</a>
    </th>
    <td class="line-code">
      <pre>    CCSetIterator setIter;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L124">
      <a href="#L124">124</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">for</span> (setIter = pTouches-&gt;begin(); setIter != pTouches-&gt;end(); ++setIter)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L125">
      <a href="#L125">125</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L126">
      <a href="#L126">126</a>
    </th>
    <td class="line-code">
      <pre>        pTouch = (CCTouch *)(*setIter);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L127">
      <a href="#L127">127</a>
    </th>
    <td class="line-code">
      <pre>        _touches-&gt;addObject(pTouch);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L128">
      <a href="#L128">128</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L129">
      <a href="#L129">129</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L130">
      <a href="#L130">130</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L131">
      <a href="#L131">131</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (_touches-&gt;count() == <span class="integer">1</span>)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L132">
      <a href="#L132">132</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L133">
      <a href="#L133">133</a>
    </th>
    <td class="line-code">
      <pre>        _touchMoveBegan = <span class="predefined-constant">false</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L134">
      <a href="#L134">134</a>
    </th>
    <td class="line-code">
      <pre>        time_t seconds;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L135">
      <a href="#L135">135</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L136">
      <a href="#L136">136</a>
    </th>
    <td class="line-code">
      <pre>        seconds = time (<span class="predefined-constant">NULL</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L137">
      <a href="#L137">137</a>
    </th>
    <td class="line-code">
      <pre>        _singleTouchTimestamp = seconds/<span class="integer">60</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L138">
      <a href="#L138">138</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L139">
      <a href="#L139">139</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">else</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L140">
      <a href="#L140">140</a>
    </th>
    <td class="line-code">
      <pre>        _singleTouchTimestamp = INFINITY;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L141">
      <a href="#L141">141</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L142">
      <a href="#L142">142</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L143">
      <a href="#L143">143</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::ccTouchesMoved(cocos2d::CCSet *pTouches, cocos2d::<span class="local-variable">CCEvent</span> *pEvent){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L144">
      <a href="#L144">144</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">bool</span> multitouch = _touches-&gt;count() &gt; <span class="integer">1</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L145">
      <a href="#L145">145</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (multitouch)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L146">
      <a href="#L146">146</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L147">
      <a href="#L147">147</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Get the two first touches</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L148">
      <a href="#L148">148</a>
    </th>
    <td class="line-code">
      <pre>        CCTouch *touch1 = (CCTouch*)_touches-&gt;objectAtIndex(<span class="integer">0</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L149">
      <a href="#L149">149</a>
    </th>
    <td class="line-code">
      <pre>        CCTouch *touch2 = (CCTouch*)_touches-&gt;objectAtIndex(<span class="integer">1</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L150">
      <a href="#L150">150</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Get current and previous positions of the touches</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L151">
      <a href="#L151">151</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCPoint</span> curPosTouch1 = <span class="local-variable">CCDirector</span>::sharedDirector()-&gt;convertToGL(touch1-&gt;getLocationInView());
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L152">
      <a href="#L152">152</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCPoint</span> curPosTouch2 = <span class="local-variable">CCDirector</span>::sharedDirector()-&gt;convertToGL(touch2-&gt;getLocationInView());
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L153">
      <a href="#L153">153</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L154">
      <a href="#L154">154</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCPoint</span> prevPosTouch1 = <span class="local-variable">CCDirector</span>::sharedDirector()-&gt;convertToGL(touch1-&gt;getPreviousLocationInView());
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L155">
      <a href="#L155">155</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCPoint</span> prevPosTouch2 = <span class="local-variable">CCDirector</span>::sharedDirector()-&gt;convertToGL(touch2-&gt;getPreviousLocationInView());
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L156">
      <a href="#L156">156</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L157">
      <a href="#L157">157</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L158">
      <a href="#L158">158</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Calculate current and previous positions of the layer relative the anchor point</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L159">
      <a href="#L159">159</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCPoint</span> curPosLayer = ccpMidpoint(curPosTouch1, curPosTouch2);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L160">
      <a href="#L160">160</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCPoint</span> prevPosLayer = ccpMidpoint(prevPosTouch1, prevPosTouch2);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L161">
      <a href="#L161">161</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L162">
      <a href="#L162">162</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Calculate new scale</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L163">
      <a href="#L163">163</a>
    </th>
    <td class="line-code">
      <pre>        <span class="predefined-type">float</span> prevScale = <span class="directive">this</span>-&gt;getScale();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L164">
      <a href="#L164">164</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L165">
      <a href="#L165">165</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L166">
      <a href="#L166">166</a>
    </th>
    <td class="line-code">
      <pre>        <span class="predefined-type">float</span> curScale = <span class="directive">this</span>-&gt;getScale() * ccpDistance(curPosTouch1, curPosTouch2) / ccpDistance(prevPosTouch1, prevPosTouch2);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L167">
      <a href="#L167">167</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L168">
      <a href="#L168">168</a>
    </th>
    <td class="line-code">
      <pre>        <span class="directive">this</span>-&gt;setScale( curScale);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L169">
      <a href="#L169">169</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Avoid scaling out from panBoundsRect when Rubber Effect is OFF.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L170">
      <a href="#L170">170</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (!_rubberEffectRatio)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L171">
      <a href="#L171">171</a>
    </th>
    <td class="line-code">
      <pre>        {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L172">
      <a href="#L172">172</a>
    </th>
    <td class="line-code">
      <pre>            <span class="directive">this</span>-&gt;setScale( MAX(<span class="directive">this</span>-&gt;getScale(), <span class="directive">this</span>-&gt;minPossibleScale())); 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L173">
      <a href="#L173">173</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L174">
      <a href="#L174">174</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// If scale was changed -&gt; set new scale and fix position with new scale</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L175">
      <a href="#L175">175</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (<span class="directive">this</span>-&gt;getScale() != prevScale)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L176">
      <a href="#L176">176</a>
    </th>
    <td class="line-code">
      <pre>        {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L177">
      <a href="#L177">177</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">if</span> (_rubberEffectRatio)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L178">
      <a href="#L178">178</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L179">
      <a href="#L179">179</a>
    </th>
    <td class="line-code">
      <pre>                _rubberEffectZooming = <span class="predefined-constant">true</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L180">
      <a href="#L180">180</a>
    </th>
    <td class="line-code">
      <pre>            }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L181">
      <a href="#L181">181</a>
    </th>
    <td class="line-code">
      <pre>            <span class="local-variable">CCPoint</span> realCurPosLayer = <span class="directive">this</span>-&gt;convertToNodeSpace(curPosLayer);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L182">
      <a href="#L182">182</a>
    </th>
    <td class="line-code">
      <pre>            <span class="predefined-type">float</span> deltaX = (realCurPosLayer.x - <span class="directive">this</span>-&gt;getAnchorPoint().x * <span class="directive">this</span>-&gt;getContentSize().width) * (<span class="directive">this</span>-&gt;getScale() - prevScale);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L183">
      <a href="#L183">183</a>
    </th>
    <td class="line-code">
      <pre>            <span class="predefined-type">float</span> deltaY = (realCurPosLayer.y - <span class="directive">this</span>-&gt;getAnchorPoint().y * <span class="directive">this</span>-&gt;getContentSize().height) * (<span class="directive">this</span>-&gt;getScale() - prevScale);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L184">
      <a href="#L184">184</a>
    </th>
    <td class="line-code">
      <pre>            <span class="directive">this</span>-&gt;setPosition(<span class="local-variable">ccp</span>(<span class="directive">this</span>-&gt;getPosition().x - deltaX, <span class="directive">this</span>-&gt;getPosition().y - deltaY));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L185">
      <a href="#L185">185</a>
    </th>
    <td class="line-code">
      <pre>            _rubberEffectZooming = <span class="predefined-constant">false</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L186">
      <a href="#L186">186</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L187">
      <a href="#L187">187</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// If current and previous position of the multitouch's center aren't equal -&gt; change position of the layer</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L188">
      <a href="#L188">188</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (!prevPosLayer.equals(curPosLayer))
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L189">
      <a href="#L189">189</a>
    </th>
    <td class="line-code">
      <pre>        {            
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L190">
      <a href="#L190">190</a>
    </th>
    <td class="line-code">
      <pre>            <span class="directive">this</span>-&gt;setPosition(<span class="local-variable">ccp</span>(<span class="directive">this</span>-&gt;getPosition().x + curPosLayer.x - prevPosLayer.x,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L191">
      <a href="#L191">191</a>
    </th>
    <td class="line-code">
      <pre>                <span class="directive">this</span>-&gt;getPosition().y + curPosLayer.y - prevPosLayer.y));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L192">
      <a href="#L192">192</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L193">
      <a href="#L193">193</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Don't click with multitouch</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L194">
      <a href="#L194">194</a>
    </th>
    <td class="line-code">
      <pre>        _touchDistance = INFINITY;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L195">
      <a href="#L195">195</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L196">
      <a href="#L196">196</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">else</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L197">
      <a href="#L197">197</a>
    </th>
    <td class="line-code">
      <pre>    {                
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L198">
      <a href="#L198">198</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Get the single touch and it's previous &amp; current position.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L199">
      <a href="#L199">199</a>
    </th>
    <td class="line-code">
      <pre>        CCTouch *touch = (CCTouch*)_touches-&gt;objectAtIndex(<span class="integer">0</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L200">
      <a href="#L200">200</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCPoint</span> curTouchPosition = <span class="local-variable">CCDirector</span>::sharedDirector()-&gt;convertToGL(touch-&gt;getLocationInView());
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L201">
      <a href="#L201">201</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCPoint</span> prevTouchPosition = <span class="local-variable">CCDirector</span>::sharedDirector()-&gt;convertToGL(touch-&gt;getPreviousLocationInView());
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L202">
      <a href="#L202">202</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L203">
      <a href="#L203">203</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Always scroll in sheet mode.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L204">
      <a href="#L204">204</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (_mode == kCCLayerPanZoomModeSheet)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L205">
      <a href="#L205">205</a>
    </th>
    <td class="line-code">
      <pre>        {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L206">
      <a href="#L206">206</a>
    </th>
    <td class="line-code">
      <pre>            <span class="comment">// Set new position of the layer.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L207">
      <a href="#L207">207</a>
    </th>
    <td class="line-code">
      <pre>            <span class="directive">this</span>-&gt;setPosition(<span class="local-variable">ccp</span>(<span class="directive">this</span>-&gt;getPosition().x + curTouchPosition.x - prevTouchPosition.x,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L208">
      <a href="#L208">208</a>
    </th>
    <td class="line-code">
      <pre>                <span class="directive">this</span>-&gt;getPosition().y + curTouchPosition.y - prevTouchPosition.y));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L209">
      <a href="#L209">209</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L210">
      <a href="#L210">210</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L211">
      <a href="#L211">211</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Accumulate touch distance for all modes.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L212">
      <a href="#L212">212</a>
    </th>
    <td class="line-code">
      <pre>        _touchDistance += ccpDistance(curTouchPosition, prevTouchPosition);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L213">
      <a href="#L213">213</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L214">
      <a href="#L214">214</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Inform delegate about starting updating touch position, if click isn't possible.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L215">
      <a href="#L215">215</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (_mode == kCCLayerPanZoomModeFrame)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L216">
      <a href="#L216">216</a>
    </th>
    <td class="line-code">
      <pre>        {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L217">
      <a href="#L217">217</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">if</span> (_touchDistance &gt; _maxTouchDistanceToClick &amp;&amp; !_touchMoveBegan)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L218">
      <a href="#L218">218</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L219">
      <a href="#L219">219</a>
    </th>
    <td class="line-code">
      <pre>                <span class="comment">//ToDo add delegate here</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L220">
      <a href="#L220">220</a>
    </th>
    <td class="line-code">
      <pre>                <span class="comment">//[self.delegate layerPanZoom: self </span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L221">
      <a href="#L221">221</a>
    </th>
    <td class="line-code">
      <pre>                <span class="comment">//  touchMoveBeganAtPosition: [self convertToNodeSpace: prevTouchPosition]];</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L222">
      <a href="#L222">222</a>
    </th>
    <td class="line-code">
      <pre>                _touchMoveBegan = <span class="predefined-constant">true</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L223">
      <a href="#L223">223</a>
    </th>
    <td class="line-code">
      <pre>            }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L224">
      <a href="#L224">224</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L225">
      <a href="#L225">225</a>
    </th>
    <td class="line-code">
      <pre>    }        
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L226">
      <a href="#L226">226</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L227">
      <a href="#L227">227</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L228">
      <a href="#L228">228</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::ccTouchesEnded(cocos2d::CCSet *pTouches, cocos2d::<span class="local-variable">CCEvent</span> *pEvent){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L229">
      <a href="#L229">229</a>
    </th>
    <td class="line-code">
      <pre>    _singleTouchTimestamp = INFINITY;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L230">
      <a href="#L230">230</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L231">
      <a href="#L231">231</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// Process click event in single touch.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L232">
      <a href="#L232">232</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">//ToDo add delegate</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L233">
      <a href="#L233">233</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (  (_touchDistance &lt; _maxTouchDistanceToClick) <span class="comment">/*&amp;&amp; (self.delegate) */</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L234">
      <a href="#L234">234</a>
    </th>
    <td class="line-code">
      <pre>        &amp;&amp; (_touches-&gt;count() == <span class="integer">1</span>))
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L235">
      <a href="#L235">235</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L236">
      <a href="#L236">236</a>
    </th>
    <td class="line-code">
      <pre>        CCTouch *touch = (CCTouch*)_touches-&gt;objectAtIndex(<span class="integer">0</span>);       
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L237">
      <a href="#L237">237</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCPoint</span> curPos = <span class="local-variable">CCDirector</span>::sharedDirector()-&gt;convertToGL(touch-&gt;getLocationInView());
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L238">
      <a href="#L238">238</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">//ToDo add delegate</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L239">
      <a href="#L239">239</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">/*[self.delegate layerPanZoom: self
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L240">
      <a href="#L240">240</a>
    </th>
    <td class="line-code">
      <pre>        clickedAtPoint: [self convertToNodeSpace: curPos]
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L241">
      <a href="#L241">241</a>
    </th>
    <td class="line-code">
      <pre>        tapCount: [touch tapCount]];*/</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L242">
      <a href="#L242">242</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L243">
      <a href="#L243">243</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L244">
      <a href="#L244">244</a>
    </th>
    <td class="line-code">
      <pre>    CCTouch *pTouch;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L245">
      <a href="#L245">245</a>
    </th>
    <td class="line-code">
      <pre>    CCSetIterator setIter;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L246">
      <a href="#L246">246</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">for</span> (setIter = pTouches-&gt;begin(); setIter != pTouches-&gt;end(); ++setIter)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L247">
      <a href="#L247">247</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L248">
      <a href="#L248">248</a>
    </th>
    <td class="line-code">
      <pre>        pTouch = (CCTouch *)(*setIter);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L249">
      <a href="#L249">249</a>
    </th>
    <td class="line-code">
      <pre>        _touches-&gt;removeObject(pTouch);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L250">
      <a href="#L250">250</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L251">
      <a href="#L251">251</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L252">
      <a href="#L252">252</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (_touches-&gt;count() == <span class="integer">0</span>)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L253">
      <a href="#L253">253</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L254">
      <a href="#L254">254</a>
    </th>
    <td class="line-code">
      <pre>        _touchDistance = <span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L255">
      <a href="#L255">255</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L256">
      <a href="#L256">256</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L257">
      <a href="#L257">257</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (!_touches-&gt;count() &amp;&amp; !_rubberEffectRecovering)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L258">
      <a href="#L258">258</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L259">
      <a href="#L259">259</a>
    </th>
    <td class="line-code">
      <pre>        <span class="directive">this</span>-&gt;recoverPositionAndScale();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L260">
      <a href="#L260">260</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L261">
      <a href="#L261">261</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L262">
      <a href="#L262">262</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L263">
      <a href="#L263">263</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::ccTouchesCancelled(cocos2d::CCSet *pTouches, cocos2d::<span class="local-variable">CCEvent</span> *pEvent){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L264">
      <a href="#L264">264</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L265">
      <a href="#L265">265</a>
    </th>
    <td class="line-code">
      <pre>    CCTouch *pTouch;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L266">
      <a href="#L266">266</a>
    </th>
    <td class="line-code">
      <pre>    CCSetIterator setIter;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L267">
      <a href="#L267">267</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">for</span> (setIter = pTouches-&gt;begin(); setIter != pTouches-&gt;end(); ++setIter)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L268">
      <a href="#L268">268</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L269">
      <a href="#L269">269</a>
    </th>
    <td class="line-code">
      <pre>        pTouch = (CCTouch *)(*setIter);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L270">
      <a href="#L270">270</a>
    </th>
    <td class="line-code">
      <pre>        _touches-&gt;removeObject(pTouch);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L271">
      <a href="#L271">271</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L272">
      <a href="#L272">272</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L273">
      <a href="#L273">273</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (_touches-&gt;count() == <span class="integer">0</span>)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L274">
      <a href="#L274">274</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L275">
      <a href="#L275">275</a>
    </th>
    <td class="line-code">
      <pre>        _touchDistance = <span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L276">
      <a href="#L276">276</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L277">
      <a href="#L277">277</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L278">
      <a href="#L278">278</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L279">
      <a href="#L279">279</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L280">
      <a href="#L280">280</a>
    </th>
    <td class="line-code">
      <pre><span class="comment">// Updates position in frame mode.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L281">
      <a href="#L281">281</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span>  CCLayerPanZoom::update(<span class="predefined-type">float</span> dt){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L282">
      <a href="#L282">282</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// Only for frame mode with one touch.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L283">
      <a href="#L283">283</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> ( _mode == kCCLayerPanZoomModeFrame &amp;&amp; _touches-&gt;count() == <span class="integer">1</span> )
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L284">
      <a href="#L284">284</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L285">
      <a href="#L285">285</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Do not update position if click is still possible.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L286">
      <a href="#L286">286</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (_touchDistance &lt;= _maxTouchDistanceToClick)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L287">
      <a href="#L287">287</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">return</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L288">
      <a href="#L288">288</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L289">
      <a href="#L289">289</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Do not update position if pinch is still possible.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L290">
      <a href="#L290">290</a>
    </th>
    <td class="line-code">
      <pre>        time_t seconds;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L291">
      <a href="#L291">291</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L292">
      <a href="#L292">292</a>
    </th>
    <td class="line-code">
      <pre>        seconds = time (<span class="predefined-constant">NULL</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L293">
      <a href="#L293">293</a>
    </th>
    <td class="line-code">
      <pre>        seconds /= <span class="integer">60</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L294">
      <a href="#L294">294</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (seconds - _singleTouchTimestamp &lt; kCCLayerPanZoomMultitouchGesturesDetectionDelay)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L295">
      <a href="#L295">295</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">return</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L296">
      <a href="#L296">296</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L297">
      <a href="#L297">297</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Otherwise - update touch position. Get current position of touch.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L298">
      <a href="#L298">298</a>
    </th>
    <td class="line-code">
      <pre>        CCTouch *touch = (CCTouch*)_touches-&gt;objectAtIndex(<span class="integer">0</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L299">
      <a href="#L299">299</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCPoint</span> curPos = <span class="local-variable">CCDirector</span>::sharedDirector()-&gt;convertToGL(touch-&gt;getLocationInView());
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L300">
      <a href="#L300">300</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L301">
      <a href="#L301">301</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Scroll if finger in the scroll area near edge.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L302">
      <a href="#L302">302</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (<span class="directive">this</span>-&gt;frameEdgeWithPoint(curPos) != kCCLayerPanZoomFrameEdgeNone)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L303">
      <a href="#L303">303</a>
    </th>
    <td class="line-code">
      <pre>        {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L304">
      <a href="#L304">304</a>
    </th>
    <td class="line-code">
      <pre>            <span class="directive">this</span>-&gt;setPosition(<span class="local-variable">ccp</span>(<span class="directive">this</span>-&gt;getPosition().x + dt * <span class="directive">this</span>-&gt;horSpeedWithPosition( curPos), 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L305">
      <a href="#L305">305</a>
    </th>
    <td class="line-code">
      <pre>                <span class="directive">this</span>-&gt;getPosition().y + dt * <span class="directive">this</span>-&gt;vertSpeedWithPosition(curPos)));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L306">
      <a href="#L306">306</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L307">
      <a href="#L307">307</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L308">
      <a href="#L308">308</a>
    </th>
    <td class="line-code">
      <pre>        <span class="comment">// Inform delegate if touch position in layer was changed due to finger or layer movement.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L309">
      <a href="#L309">309</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCPoint</span> touchPositionInLayer = <span class="directive">this</span>-&gt;convertToNodeSpace(curPos);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L310">
      <a href="#L310">310</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (!_prevSingleTouchPositionInLayer.equals(touchPositionInLayer))
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L311">
      <a href="#L311">311</a>
    </th>
    <td class="line-code">
      <pre>        {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L312">
      <a href="#L312">312</a>
    </th>
    <td class="line-code">
      <pre>            _prevSingleTouchPositionInLayer = touchPositionInLayer;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L313">
      <a href="#L313">313</a>
    </th>
    <td class="line-code">
      <pre>            <span class="comment">//ToDo add delegate</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L314">
      <a href="#L314">314</a>
    </th>
    <td class="line-code">
      <pre>            <span class="comment">//[self.delegate layerPanZoom: self </span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L315">
      <a href="#L315">315</a>
    </th>
    <td class="line-code">
      <pre>            <span class="comment">//      touchPositionUpdated: touchPositionInLayer];</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L316">
      <a href="#L316">316</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L317">
      <a href="#L317">317</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L318">
      <a href="#L318">318</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L319">
      <a href="#L319">319</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L320">
      <a href="#L320">320</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L321">
      <a href="#L321">321</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span>  CCLayerPanZoom::onEnter(){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L322">
      <a href="#L322">322</a>
    </th>
    <td class="line-code">
      <pre>    <span class="local-variable">CCLayer</span>::onEnter();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L323">
      <a href="#L323">323</a>
    </th>
    <td class="line-code">
      <pre>    <span class="local-variable">CCDirector</span>::sharedDirector()-&gt;getScheduler()-&gt;scheduleUpdateForTarget(<span class="directive">this</span>, <span class="integer">0</span>, <span class="predefined-constant">false</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L324">
      <a href="#L324">324</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L325">
      <a href="#L325">325</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L326">
      <a href="#L326">326</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span>  CCLayerPanZoom::onExit(){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L327">
      <a href="#L327">327</a>
    </th>
    <td class="line-code">
      <pre>    <span class="local-variable">CCDirector</span>::sharedDirector()-&gt;getScheduler()-&gt;unscheduleAllSelectorsForTarget(<span class="directive">this</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L328">
      <a href="#L328">328</a>
    </th>
    <td class="line-code">
      <pre>    <span class="local-variable">CCLayer</span>::onExit();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L329">
      <a href="#L329">329</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L330">
      <a href="#L330">330</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::setPanBoundsRect(<span class="local-variable">CCRect</span> rect){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L331">
      <a href="#L331">331</a>
    </th>
    <td class="line-code">
      <pre>    _panBoundsRect = rect;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L332">
      <a href="#L332">332</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">this</span>-&gt;setScale(<span class="directive">this</span>-&gt;minPossibleScale());
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L333">
      <a href="#L333">333</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">this</span>-&gt;setPosition(<span class="directive">this</span>-&gt;getPosition());
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L334">
      <a href="#L334">334</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L335">
      <a href="#L335">335</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L336">
      <a href="#L336">336</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::setPosition(<span class="local-variable">CCPoint</span>  position){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L337">
      <a href="#L337">337</a>
    </th>
    <td class="line-code">
      <pre>    <span class="local-variable">CCPoint</span> prevPosition = <span class="directive">this</span>-&gt;getPosition();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L338">
      <a href="#L338">338</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">//May be it wouldnot work</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L339">
      <a href="#L339">339</a>
    </th>
    <td class="line-code">
      <pre>    <span class="local-variable">CCNode</span>::setPosition(position);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L340">
      <a href="#L340">340</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L341">
      <a href="#L341">341</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (!_panBoundsRect.equals(CCRectZero) &amp;&amp; !_rubberEffectZooming)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L342">
      <a href="#L342">342</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L343">
      <a href="#L343">343</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (_rubberEffectRatio &amp;&amp; _mode == kCCLayerPanZoomModeSheet)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L344">
      <a href="#L344">344</a>
    </th>
    <td class="line-code">
      <pre>        {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L345">
      <a href="#L345">345</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">if</span> (!_rubberEffectRecovering)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L346">
      <a href="#L346">346</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L347">
      <a href="#L347">347</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> topDistance = <span class="directive">this</span>-&gt;topEdgeDistance();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L348">
      <a href="#L348">348</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> bottomDistance = <span class="directive">this</span>-&gt;bottomEdgeDistance();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L349">
      <a href="#L349">349</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> leftDistance = <span class="directive">this</span>-&gt;leftEdgeDistance();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L350">
      <a href="#L350">350</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> rightDistance = <span class="directive">this</span>-&gt;rightEdgeDistance();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L351">
      <a href="#L351">351</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dx = <span class="directive">this</span>-&gt;getPosition().x - prevPosition.x;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L352">
      <a href="#L352">352</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dy = <span class="directive">this</span>-&gt;getPosition().y - prevPosition.y;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L353">
      <a href="#L353">353</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">if</span> (bottomDistance || topDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L354">
      <a href="#L354">354</a>
    </th>
    <td class="line-code">
      <pre>                {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L355">
      <a href="#L355">355</a>
    </th>
    <td class="line-code">
      <pre>                    <span class="local-variable">CCNode</span>::setPosition(<span class="local-variable">ccp</span>(<span class="directive">this</span>-&gt;getPosition().x, 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L356">
      <a href="#L356">356</a>
    </th>
    <td class="line-code">
      <pre>                        prevPosition.y + dy * _rubberEffectRatio));                    
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L357">
      <a href="#L357">357</a>
    </th>
    <td class="line-code">
      <pre>                }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L358">
      <a href="#L358">358</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">if</span> (leftDistance || rightDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L359">
      <a href="#L359">359</a>
    </th>
    <td class="line-code">
      <pre>                {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L360">
      <a href="#L360">360</a>
    </th>
    <td class="line-code">
      <pre>                    <span class="local-variable">CCNode</span>::setPosition(<span class="local-variable">ccp</span>(prevPosition.x + dx * _rubberEffectRatio, 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L361">
      <a href="#L361">361</a>
    </th>
    <td class="line-code">
      <pre>                        <span class="directive">this</span>-&gt;getPosition().y));                    
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L362">
      <a href="#L362">362</a>
    </th>
    <td class="line-code">
      <pre>                }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L363">
      <a href="#L363">363</a>
    </th>
    <td class="line-code">
      <pre>            }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L364">
      <a href="#L364">364</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L365">
      <a href="#L365">365</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">else</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L366">
      <a href="#L366">366</a>
    </th>
    <td class="line-code">
      <pre>        {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L367">
      <a href="#L367">367</a>
    </th>
    <td class="line-code">
      <pre>            <span class="local-variable">CCRect</span> boundBox = <span class="directive">this</span>-&gt;boundingBox();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L368">
      <a href="#L368">368</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">if</span> (<span class="directive">this</span>-&gt;getPosition().x - boundBox.size.width * <span class="directive">this</span>-&gt;getAnchorPoint().x &gt; _panBoundsRect.origin.x)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L369">
      <a href="#L369">369</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L370">
      <a href="#L370">370</a>
    </th>
    <td class="line-code">
      <pre>                <span class="local-variable">CCNode</span>::setPosition(<span class="local-variable">ccp</span>(boundBox.size.width * <span class="directive">this</span>-&gt;getAnchorPoint().x + _panBoundsRect.origin.x, 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L371">
      <a href="#L371">371</a>
    </th>
    <td class="line-code">
      <pre>                    <span class="directive">this</span>-&gt;getPosition().y));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L372">
      <a href="#L372">372</a>
    </th>
    <td class="line-code">
      <pre>            }        
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L373">
      <a href="#L373">373</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">if</span> (<span class="directive">this</span>-&gt;getPosition().y - boundBox.size.height * <span class="directive">this</span>-&gt;getAnchorPoint().y &gt; _panBoundsRect.origin.y)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L374">
      <a href="#L374">374</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L375">
      <a href="#L375">375</a>
    </th>
    <td class="line-code">
      <pre>                <span class="local-variable">CCNode</span>::setPosition(<span class="local-variable">ccp</span>(<span class="directive">this</span>-&gt;getPosition().x, boundBox.size.height * <span class="directive">this</span>-&gt;getAnchorPoint().y + 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L376">
      <a href="#L376">376</a>
    </th>
    <td class="line-code">
      <pre>                    _panBoundsRect.origin.y));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L377">
      <a href="#L377">377</a>
    </th>
    <td class="line-code">
      <pre>            }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L378">
      <a href="#L378">378</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">if</span> (<span class="directive">this</span>-&gt;getPosition().x + boundBox.size.width * (<span class="integer">1</span> - <span class="directive">this</span>-&gt;getAnchorPoint().x) &lt; _panBoundsRect.size.width +
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L379">
      <a href="#L379">379</a>
    </th>
    <td class="line-code">
      <pre>                _panBoundsRect.origin.x)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L380">
      <a href="#L380">380</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L381">
      <a href="#L381">381</a>
    </th>
    <td class="line-code">
      <pre>                <span class="local-variable">CCNode</span>::setPosition(<span class="local-variable">ccp</span>(_panBoundsRect.size.width + _panBoundsRect.origin.x - 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L382">
      <a href="#L382">382</a>
    </th>
    <td class="line-code">
      <pre>                    boundBox.size.width * (<span class="integer">1</span> - <span class="directive">this</span>-&gt;getAnchorPoint().x), <span class="directive">this</span>-&gt;getPosition().y));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L383">
      <a href="#L383">383</a>
    </th>
    <td class="line-code">
      <pre>            }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L384">
      <a href="#L384">384</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">if</span> (<span class="directive">this</span>-&gt;getPosition().y + boundBox.size.height * (<span class="integer">1</span> - <span class="directive">this</span>-&gt;getAnchorPoint().y) &lt; _panBoundsRect.size.height + 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L385">
      <a href="#L385">385</a>
    </th>
    <td class="line-code">
      <pre>                _panBoundsRect.origin.y)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L386">
      <a href="#L386">386</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L387">
      <a href="#L387">387</a>
    </th>
    <td class="line-code">
      <pre>                <span class="local-variable">CCNode</span>::setPosition(<span class="local-variable">ccp</span>(<span class="directive">this</span>-&gt;getPosition().x, _panBoundsRect.size.height + _panBoundsRect.origin.y - 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L388">
      <a href="#L388">388</a>
    </th>
    <td class="line-code">
      <pre>                    boundBox.size.height * (<span class="integer">1</span> - <span class="directive">this</span>-&gt;getAnchorPoint().y)));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L389">
      <a href="#L389">389</a>
    </th>
    <td class="line-code">
      <pre>            }        
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L390">
      <a href="#L390">390</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L391">
      <a href="#L391">391</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L392">
      <a href="#L392">392</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L393">
      <a href="#L393">393</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L394">
      <a href="#L394">394</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::setScale(<span class="predefined-type">float</span> scale){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L395">
      <a href="#L395">395</a>
    </th>
    <td class="line-code">
      <pre>    <span class="local-variable">CCLayer</span>::setScale( MIN(MAX(scale, _minScale), _maxScale));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L396">
      <a href="#L396">396</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L397">
      <a href="#L397">397</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L398">
      <a href="#L398">398</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::recoverPositionAndScale(){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L399">
      <a href="#L399">399</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (!_panBoundsRect.equals(CCRectZero))
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L400">
      <a href="#L400">400</a>
    </th>
    <td class="line-code">
      <pre>    {    
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L401">
      <a href="#L401">401</a>
    </th>
    <td class="line-code">
      <pre>        <span class="local-variable">CCSize</span> winSize = <span class="local-variable">CCDirector</span>::sharedDirector()-&gt;getWinSize();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L402">
      <a href="#L402">402</a>
    </th>
    <td class="line-code">
      <pre>        <span class="predefined-type">float</span> rightEdgeDistance = <span class="directive">this</span>-&gt;rightEdgeDistance();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L403">
      <a href="#L403">403</a>
    </th>
    <td class="line-code">
      <pre>        <span class="predefined-type">float</span> leftEdgeDistance = <span class="directive">this</span>-&gt;leftEdgeDistance();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L404">
      <a href="#L404">404</a>
    </th>
    <td class="line-code">
      <pre>        <span class="predefined-type">float</span> topEdgeDistance = <span class="directive">this</span>-&gt;topEdgeDistance();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L405">
      <a href="#L405">405</a>
    </th>
    <td class="line-code">
      <pre>        <span class="predefined-type">float</span> bottomEdgeDistance = <span class="directive">this</span>-&gt;bottomEdgeDistance();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L406">
      <a href="#L406">406</a>
    </th>
    <td class="line-code">
      <pre>        <span class="predefined-type">float</span> scale = <span class="directive">this</span>-&gt;minPossibleScale();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L407">
      <a href="#L407">407</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L408">
      <a href="#L408">408</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (!rightEdgeDistance &amp;&amp; !leftEdgeDistance &amp;&amp; !topEdgeDistance &amp;&amp; !bottomEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L409">
      <a href="#L409">409</a>
    </th>
    <td class="line-code">
      <pre>        {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L410">
      <a href="#L410">410</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">return</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L411">
      <a href="#L411">411</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L412">
      <a href="#L412">412</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L413">
      <a href="#L413">413</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">if</span> (<span class="directive">this</span>-&gt;getScale() &lt; scale)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L414">
      <a href="#L414">414</a>
    </th>
    <td class="line-code">
      <pre>        {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L415">
      <a href="#L415">415</a>
    </th>
    <td class="line-code">
      <pre>            _rubberEffectRecovering = <span class="predefined-constant">true</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L416">
      <a href="#L416">416</a>
    </th>
    <td class="line-code">
      <pre>            <span class="local-variable">CCPoint</span> newPosition = CCPointZero;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L417">
      <a href="#L417">417</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">if</span> (rightEdgeDistance &amp;&amp; leftEdgeDistance &amp;&amp; topEdgeDistance &amp;&amp; bottomEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L418">
      <a href="#L418">418</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L419">
      <a href="#L419">419</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dx = scale * <span class="directive">this</span>-&gt;getContentSize().width * (<span class="directive">this</span>-&gt;getAnchorPoint().x - <span class="float">0</span><span class="float">.5f</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L420">
      <a href="#L420">420</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dy = scale * <span class="directive">this</span>-&gt;getContentSize().height * (<span class="directive">this</span>-&gt;getAnchorPoint().y - <span class="float">0</span><span class="float">.5f</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L421">
      <a href="#L421">421</a>
    </th>
    <td class="line-code">
      <pre>                newPosition = <span class="local-variable">ccp</span>(winSize.width * <span class="float">0</span><span class="float">.5f</span> + dx, winSize.height * <span class="float">0</span><span class="float">.5f</span> + dy);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L422">
      <a href="#L422">422</a>
    </th>
    <td class="line-code">
      <pre>            }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L423">
      <a href="#L423">423</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">else</span> <span class="keyword">if</span> (rightEdgeDistance &amp;&amp; leftEdgeDistance &amp;&amp; topEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L424">
      <a href="#L424">424</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L425">
      <a href="#L425">425</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dx = scale * <span class="directive">this</span>-&gt;getContentSize().width * (<span class="directive">this</span>-&gt;getAnchorPoint().x - <span class="float">0</span><span class="float">.5f</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L426">
      <a href="#L426">426</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dy = scale * <span class="directive">this</span>-&gt;getContentSize().height * (<span class="float">1</span><span class="float">.0f</span> - <span class="directive">this</span>-&gt;getAnchorPoint().y);            
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L427">
      <a href="#L427">427</a>
    </th>
    <td class="line-code">
      <pre>                newPosition = <span class="local-variable">ccp</span>(winSize.width * <span class="float">0</span><span class="float">.5f</span> + dx, winSize.height - dy);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L428">
      <a href="#L428">428</a>
    </th>
    <td class="line-code">
      <pre>            }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L429">
      <a href="#L429">429</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">else</span> <span class="keyword">if</span> (rightEdgeDistance &amp;&amp; leftEdgeDistance &amp;&amp; bottomEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L430">
      <a href="#L430">430</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L431">
      <a href="#L431">431</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dx = scale * <span class="directive">this</span>-&gt;getContentSize().width * (<span class="directive">this</span>-&gt;getAnchorPoint().x - <span class="float">0</span><span class="float">.5f</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L432">
      <a href="#L432">432</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dy = scale * <span class="directive">this</span>-&gt;getContentSize().height * <span class="directive">this</span>-&gt;getAnchorPoint().y;            
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L433">
      <a href="#L433">433</a>
    </th>
    <td class="line-code">
      <pre>                newPosition = <span class="local-variable">ccp</span>(winSize.width * <span class="float">0</span><span class="float">.5f</span> + dx, dy);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L434">
      <a href="#L434">434</a>
    </th>
    <td class="line-code">
      <pre>            }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L435">
      <a href="#L435">435</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">else</span> <span class="keyword">if</span> (rightEdgeDistance &amp;&amp; topEdgeDistance &amp;&amp; bottomEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L436">
      <a href="#L436">436</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L437">
      <a href="#L437">437</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dx = scale * <span class="directive">this</span>-&gt;getContentSize().width * (<span class="float">1</span><span class="float">.0f</span> - <span class="directive">this</span>-&gt;getAnchorPoint().x);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L438">
      <a href="#L438">438</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dy = scale * <span class="directive">this</span>-&gt;getContentSize().height * (<span class="directive">this</span>-&gt;getAnchorPoint().y - <span class="float">0</span><span class="float">.5f</span>);            
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L439">
      <a href="#L439">439</a>
    </th>
    <td class="line-code">
      <pre>                newPosition = <span class="local-variable">ccp</span>(winSize.width  - dx, winSize.height  * <span class="float">0</span><span class="float">.5f</span> + dy);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L440">
      <a href="#L440">440</a>
    </th>
    <td class="line-code">
      <pre>            }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L441">
      <a href="#L441">441</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">else</span> <span class="keyword">if</span> (leftEdgeDistance &amp;&amp; topEdgeDistance &amp;&amp; bottomEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L442">
      <a href="#L442">442</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L443">
      <a href="#L443">443</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dx = scale * <span class="directive">this</span>-&gt;getContentSize().width * <span class="directive">this</span>-&gt;getAnchorPoint().x;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L444">
      <a href="#L444">444</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dy = scale * <span class="directive">this</span>-&gt;getContentSize().height * (<span class="directive">this</span>-&gt;getAnchorPoint().y - <span class="float">0</span><span class="float">.5f</span>);            
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L445">
      <a href="#L445">445</a>
    </th>
    <td class="line-code">
      <pre>                newPosition = <span class="local-variable">ccp</span>(dx, winSize.height * <span class="float">0</span><span class="float">.5f</span> + dy);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L446">
      <a href="#L446">446</a>
    </th>
    <td class="line-code">
      <pre>            }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L447">
      <a href="#L447">447</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">else</span> <span class="keyword">if</span> (leftEdgeDistance &amp;&amp; topEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L448">
      <a href="#L448">448</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L449">
      <a href="#L449">449</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dx = scale * <span class="directive">this</span>-&gt;getContentSize().width * <span class="directive">this</span>-&gt;getAnchorPoint().x;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L450">
      <a href="#L450">450</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dy = scale * <span class="directive">this</span>-&gt;getContentSize().height * (<span class="float">1</span><span class="float">.0f</span> - <span class="directive">this</span>-&gt;getAnchorPoint().y);            
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L451">
      <a href="#L451">451</a>
    </th>
    <td class="line-code">
      <pre>                newPosition = <span class="local-variable">ccp</span>(dx, winSize.height - dy);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L452">
      <a href="#L452">452</a>
    </th>
    <td class="line-code">
      <pre>            } 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L453">
      <a href="#L453">453</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">else</span> <span class="keyword">if</span> (leftEdgeDistance &amp;&amp; bottomEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L454">
      <a href="#L454">454</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L455">
      <a href="#L455">455</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dx = scale * <span class="directive">this</span>-&gt;getContentSize().width * <span class="directive">this</span>-&gt;getAnchorPoint().x;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L456">
      <a href="#L456">456</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dy = scale * <span class="directive">this</span>-&gt;getContentSize().height * <span class="directive">this</span>-&gt;getAnchorPoint().y;            
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L457">
      <a href="#L457">457</a>
    </th>
    <td class="line-code">
      <pre>                newPosition = <span class="local-variable">ccp</span>(dx, dy);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L458">
      <a href="#L458">458</a>
    </th>
    <td class="line-code">
      <pre>            } 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L459">
      <a href="#L459">459</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">else</span> <span class="keyword">if</span> (rightEdgeDistance &amp;&amp; topEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L460">
      <a href="#L460">460</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L461">
      <a href="#L461">461</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dx = scale * <span class="directive">this</span>-&gt;getContentSize().width * (<span class="float">1</span><span class="float">.0f</span> - <span class="directive">this</span>-&gt;getAnchorPoint().x);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L462">
      <a href="#L462">462</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dy = scale * <span class="directive">this</span>-&gt;getContentSize().height * (<span class="float">1</span><span class="float">.0f</span> - <span class="directive">this</span>-&gt;getAnchorPoint().y);            
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L463">
      <a href="#L463">463</a>
    </th>
    <td class="line-code">
      <pre>                newPosition = <span class="local-variable">ccp</span>(winSize.width - dx, winSize.height - dy);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L464">
      <a href="#L464">464</a>
    </th>
    <td class="line-code">
      <pre>            } 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L465">
      <a href="#L465">465</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">else</span> <span class="keyword">if</span> (rightEdgeDistance &amp;&amp; bottomEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L466">
      <a href="#L466">466</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L467">
      <a href="#L467">467</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dx = scale * <span class="directive">this</span>-&gt;getContentSize().width * (<span class="float">1</span><span class="float">.0f</span> - <span class="directive">this</span>-&gt;getAnchorPoint().x);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L468">
      <a href="#L468">468</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dy = scale * <span class="directive">this</span>-&gt;getContentSize().height * <span class="directive">this</span>-&gt;getAnchorPoint().y;            
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L469">
      <a href="#L469">469</a>
    </th>
    <td class="line-code">
      <pre>                newPosition = <span class="local-variable">ccp</span>(winSize.width - dx, dy);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L470">
      <a href="#L470">470</a>
    </th>
    <td class="line-code">
      <pre>            } 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L471">
      <a href="#L471">471</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">else</span> <span class="keyword">if</span> (topEdgeDistance || bottomEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L472">
      <a href="#L472">472</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L473">
      <a href="#L473">473</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dy = scale * <span class="directive">this</span>-&gt;getContentSize().height * (<span class="directive">this</span>-&gt;getAnchorPoint().y - <span class="float">0</span><span class="float">.5f</span>);            
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L474">
      <a href="#L474">474</a>
    </th>
    <td class="line-code">
      <pre>                newPosition = <span class="local-variable">ccp</span>(<span class="directive">this</span>-&gt;getPosition().x, winSize.height * <span class="float">0</span><span class="float">.5f</span> + dy);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L475">
      <a href="#L475">475</a>
    </th>
    <td class="line-code">
      <pre>            }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L476">
      <a href="#L476">476</a>
    </th>
    <td class="line-code">
      <pre>            <span class="keyword">else</span> <span class="keyword">if</span> (leftEdgeDistance || rightEdgeDistance)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L477">
      <a href="#L477">477</a>
    </th>
    <td class="line-code">
      <pre>            {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L478">
      <a href="#L478">478</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">float</span> dx = scale * <span class="directive">this</span>-&gt;getContentSize().width * (<span class="directive">this</span>-&gt;getAnchorPoint().x - <span class="float">0</span><span class="float">.5f</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L479">
      <a href="#L479">479</a>
    </th>
    <td class="line-code">
      <pre>                newPosition = <span class="local-variable">ccp</span>(winSize.width * <span class="float">0</span><span class="float">.5f</span> + dx, <span class="directive">this</span>-&gt;getPosition().y);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L480">
      <a href="#L480">480</a>
    </th>
    <td class="line-code">
      <pre>            } 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L481">
      <a href="#L481">481</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L482">
      <a href="#L482">482</a>
    </th>
    <td class="line-code">
      <pre>            <span class="local-variable">CCMoveTo</span> *moveToPosition = <span class="local-variable">CCMoveTo</span>::create( _rubberEffectRecoveryTime,newPosition);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L483">
      <a href="#L483">483</a>
    </th>
    <td class="line-code">
      <pre>            CCScaleTo *scaleToPosition = CCScaleTo::create( _rubberEffectRecoveryTime,scale);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L484">
      <a href="#L484">484</a>
    </th>
    <td class="line-code">
      <pre>            CCFiniteTimeAction *sequence = CCSpawn::create(scaleToPosition, moveToPosition, CCCallFunc::create( <span class="directive">this</span>, <span class="local-variable">callfunc_selector</span>(CCLayerPanZoom::recoverEnded)), <span class="predefined-constant">NULL</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L485">
      <a href="#L485">485</a>
    </th>
    <td class="line-code">
      <pre>            <span class="directive">this</span>-&gt;runAction(sequence);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L486">
      <a href="#L486">486</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L487">
      <a href="#L487">487</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L488">
      <a href="#L488">488</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">else</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L489">
      <a href="#L489">489</a>
    </th>
    <td class="line-code">
      <pre>        {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L490">
      <a href="#L490">490</a>
    </th>
    <td class="line-code">
      <pre>            _rubberEffectRecovering = <span class="predefined-constant">false</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L491">
      <a href="#L491">491</a>
    </th>
    <td class="line-code">
      <pre>            <span class="local-variable">CCMoveTo</span> *moveToPosition = <span class="local-variable">CCMoveTo</span>::create(_rubberEffectRecoveryTime,<span class="local-variable">ccp</span>(<span class="directive">this</span>-&gt;getPosition().x + rightEdgeDistance - leftEdgeDistance, 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L492">
      <a href="#L492">492</a>
    </th>
    <td class="line-code">
      <pre>                <span class="directive">this</span>-&gt;getPosition().y + topEdgeDistance - bottomEdgeDistance));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L493">
      <a href="#L493">493</a>
    </th>
    <td class="line-code">
      <pre>            CCFiniteTimeAction *sequence = CCSpawn::create(moveToPosition, CCCallFunc::create( <span class="directive">this</span>, <span class="local-variable">callfunc_selector</span>(CCLayerPanZoom::recoverEnded)), <span class="predefined-constant">NULL</span>);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L494">
      <a href="#L494">494</a>
    </th>
    <td class="line-code">
      <pre>            <span class="directive">this</span>-&gt;runAction(sequence);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L495">
      <a href="#L495">495</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L496">
      <a href="#L496">496</a>
    </th>
    <td class="line-code">
      <pre>        }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L497">
      <a href="#L497">497</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L498">
      <a href="#L498">498</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L499">
      <a href="#L499">499</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L500">
      <a href="#L500">500</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">void</span> CCLayerPanZoom::recoverEnded(){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L501">
      <a href="#L501">501</a>
    </th>
    <td class="line-code">
      <pre>    _rubberEffectRecovering = <span class="predefined-constant">false</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L502">
      <a href="#L502">502</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L503">
      <a href="#L503">503</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L504">
      <a href="#L504">504</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">float</span> CCLayerPanZoom::topEdgeDistance(){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L505">
      <a href="#L505">505</a>
    </th>
    <td class="line-code">
      <pre>    <span class="local-variable">CCRect</span> boundBox = <span class="directive">this</span>-&gt;boundingBox();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L506">
      <a href="#L506">506</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> (<span class="predefined-type">int</span>)(MAX(_panBoundsRect.size.height + _panBoundsRect.origin.y - <span class="directive">this</span>-&gt;getPosition().y - 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L507">
      <a href="#L507">507</a>
    </th>
    <td class="line-code">
      <pre>        boundBox.size.height * (<span class="integer">1</span> - <span class="directive">this</span>-&gt;getAnchorPoint().y), <span class="integer">0</span>));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L508">
      <a href="#L508">508</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L509">
      <a href="#L509">509</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L510">
      <a href="#L510">510</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">float</span> CCLayerPanZoom::leftEdgeDistance(){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L511">
      <a href="#L511">511</a>
    </th>
    <td class="line-code">
      <pre>    <span class="local-variable">CCRect</span> boundBox = <span class="directive">this</span>-&gt;boundingBox();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L512">
      <a href="#L512">512</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> (<span class="predefined-type">int</span>)(MAX(<span class="directive">this</span>-&gt;getPosition().x - boundBox.size.width * <span class="directive">this</span>-&gt;getAnchorPoint().x - _panBoundsRect.origin.x, <span class="integer">0</span>));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L513">
      <a href="#L513">513</a>
    </th>
    <td class="line-code">
      <pre>}    
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L514">
      <a href="#L514">514</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L515">
      <a href="#L515">515</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">float</span> CCLayerPanZoom::bottomEdgeDistance(){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L516">
      <a href="#L516">516</a>
    </th>
    <td class="line-code">
      <pre>    <span class="local-variable">CCRect</span> boundBox = <span class="directive">this</span>-&gt;boundingBox();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L517">
      <a href="#L517">517</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> (<span class="predefined-type">int</span>)(MAX(<span class="directive">this</span>-&gt;getPosition().y - boundBox.size.height * <span class="directive">this</span>-&gt;getAnchorPoint().y - _panBoundsRect.origin.y, <span class="integer">0</span>));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L518">
      <a href="#L518">518</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L519">
      <a href="#L519">519</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L520">
      <a href="#L520">520</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">float</span> CCLayerPanZoom::rightEdgeDistance(){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L521">
      <a href="#L521">521</a>
    </th>
    <td class="line-code">
      <pre>    <span class="local-variable">CCRect</span> boundBox = <span class="directive">this</span>-&gt;boundingBox();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L522">
      <a href="#L522">522</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> (<span class="predefined-type">int</span>)(MAX(_panBoundsRect.size.width + _panBoundsRect.origin.x - <span class="directive">this</span>-&gt;getPosition().x - 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L523">
      <a href="#L523">523</a>
    </th>
    <td class="line-code">
      <pre>        boundBox.size.width * (<span class="integer">1</span> - <span class="directive">this</span>-&gt;getAnchorPoint().x), <span class="integer">0</span>));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L524">
      <a href="#L524">524</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L525">
      <a href="#L525">525</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L526">
      <a href="#L526">526</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">float</span> CCLayerPanZoom::minPossibleScale(){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L527">
      <a href="#L527">527</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (!_panBoundsRect.equals(CCRectZero))
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L528">
      <a href="#L528">528</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L529">
      <a href="#L529">529</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> MAX(_panBoundsRect.size.width / <span class="directive">this</span>-&gt;getContentSize().width,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L530">
      <a href="#L530">530</a>
    </th>
    <td class="line-code">
      <pre>            _panBoundsRect.size.height /<span class="directive">this</span>-&gt;getContentSize().height);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L531">
      <a href="#L531">531</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L532">
      <a href="#L532">532</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">else</span> 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L533">
      <a href="#L533">533</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L534">
      <a href="#L534">534</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> _minScale;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L535">
      <a href="#L535">535</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L536">
      <a href="#L536">536</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L537">
      <a href="#L537">537</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L538">
      <a href="#L538">538</a>
    </th>
    <td class="line-code">
      <pre>CCLayerPanZoomFrameEdge CCLayerPanZoom::frameEdgeWithPoint( <span class="local-variable">CCPoint</span> point){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L539">
      <a href="#L539">539</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">bool</span> isLeft = point.x &lt;= _panBoundsRect.origin.x + _leftFrameMargin;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L540">
      <a href="#L540">540</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">bool</span> isRight = point.x &gt;= _panBoundsRect.origin.x + _panBoundsRect.size.width - _rightFrameMargin;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L541">
      <a href="#L541">541</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">bool</span> isBottom = point.y &lt;= _panBoundsRect.origin.y + _bottomFrameMargin;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L542">
      <a href="#L542">542</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">bool</span> isTop = point.y &gt;= _panBoundsRect.origin.y + _panBoundsRect.size.height - _topFrameMargin;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L543">
      <a href="#L543">543</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L544">
      <a href="#L544">544</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (isLeft &amp;&amp; isBottom)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L545">
      <a href="#L545">545</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L546">
      <a href="#L546">546</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> kCCLayerPanZoomFrameEdgeBottomLeft;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L547">
      <a href="#L547">547</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L548">
      <a href="#L548">548</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (isLeft &amp;&amp; isTop)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L549">
      <a href="#L549">549</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L550">
      <a href="#L550">550</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> kCCLayerPanZoomFrameEdgeTopLeft;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L551">
      <a href="#L551">551</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L552">
      <a href="#L552">552</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (isRight &amp;&amp; isBottom)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L553">
      <a href="#L553">553</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L554">
      <a href="#L554">554</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> kCCLayerPanZoomFrameEdgeBottomRight;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L555">
      <a href="#L555">555</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L556">
      <a href="#L556">556</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (isRight &amp;&amp; isTop)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L557">
      <a href="#L557">557</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L558">
      <a href="#L558">558</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> kCCLayerPanZoomFrameEdgeTopRight;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L559">
      <a href="#L559">559</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L560">
      <a href="#L560">560</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L561">
      <a href="#L561">561</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (isLeft)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L562">
      <a href="#L562">562</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L563">
      <a href="#L563">563</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> kCCLayerPanZoomFrameEdgeLeft;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L564">
      <a href="#L564">564</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L565">
      <a href="#L565">565</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (isTop)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L566">
      <a href="#L566">566</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L567">
      <a href="#L567">567</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> kCCLayerPanZoomFrameEdgeTop;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L568">
      <a href="#L568">568</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L569">
      <a href="#L569">569</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (isRight)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L570">
      <a href="#L570">570</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L571">
      <a href="#L571">571</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> kCCLayerPanZoomFrameEdgeRight;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L572">
      <a href="#L572">572</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L573">
      <a href="#L573">573</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (isBottom)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L574">
      <a href="#L574">574</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L575">
      <a href="#L575">575</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> kCCLayerPanZoomFrameEdgeBottom;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L576">
      <a href="#L576">576</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L577">
      <a href="#L577">577</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L578">
      <a href="#L578">578</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> kCCLayerPanZoomFrameEdgeNone;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L579">
      <a href="#L579">579</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L580">
      <a href="#L580">580</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L581">
      <a href="#L581">581</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">float</span> CCLayerPanZoom::horSpeedWithPosition(<span class="local-variable">CCPoint</span> pos){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L582">
      <a href="#L582">582</a>
    </th>
    <td class="line-code">
      <pre>    CCLayerPanZoomFrameEdge edge = <span class="directive">this</span>-&gt;frameEdgeWithPoint(pos);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L583">
      <a href="#L583">583</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> speed = <span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L584">
      <a href="#L584">584</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (edge == kCCLayerPanZoomFrameEdgeLeft)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L585">
      <a href="#L585">585</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L586">
      <a href="#L586">586</a>
    </th>
    <td class="line-code">
      <pre>        speed = _minSpeed + (_maxSpeed - _minSpeed) * 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L587">
      <a href="#L587">587</a>
    </th>
    <td class="line-code">
      <pre>            (_panBoundsRect.origin.x + _leftFrameMargin - pos.x) / _leftFrameMargin;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L588">
      <a href="#L588">588</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L589">
      <a href="#L589">589</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (edge == kCCLayerPanZoomFrameEdgeBottomLeft || edge == kCCLayerPanZoomFrameEdgeTopLeft)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L590">
      <a href="#L590">590</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L591">
      <a href="#L591">591</a>
    </th>
    <td class="line-code">
      <pre>        speed = _minSpeed + (_maxSpeed - _minSpeed) * 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L592">
      <a href="#L592">592</a>
    </th>
    <td class="line-code">
      <pre>            (_panBoundsRect.origin.x + _leftFrameMargin - pos.x) / (_leftFrameMargin * sqrt(<span class="float">2</span><span class="float">.0f</span>));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L593">
      <a href="#L593">593</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L594">
      <a href="#L594">594</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (edge == kCCLayerPanZoomFrameEdgeRight)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L595">
      <a href="#L595">595</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L596">
      <a href="#L596">596</a>
    </th>
    <td class="line-code">
      <pre>        speed = - (_minSpeed + (_maxSpeed - _minSpeed) * 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L597">
      <a href="#L597">597</a>
    </th>
    <td class="line-code">
      <pre>            (pos.x - _panBoundsRect.origin.x - _panBoundsRect.size.width + 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L598">
      <a href="#L598">598</a>
    </th>
    <td class="line-code">
      <pre>            _rightFrameMargin) / _rightFrameMargin);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L599">
      <a href="#L599">599</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L600">
      <a href="#L600">600</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (edge == kCCLayerPanZoomFrameEdgeBottomRight || edge == kCCLayerPanZoomFrameEdgeTopRight)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L601">
      <a href="#L601">601</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L602">
      <a href="#L602">602</a>
    </th>
    <td class="line-code">
      <pre>        speed = - (_minSpeed + (_maxSpeed - _minSpeed) * 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L603">
      <a href="#L603">603</a>
    </th>
    <td class="line-code">
      <pre>            (pos.x - _panBoundsRect.origin.x - _panBoundsRect.size.width + 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L604">
      <a href="#L604">604</a>
    </th>
    <td class="line-code">
      <pre>            _rightFrameMargin) / (_rightFrameMargin * sqrt(<span class="float">2</span><span class="float">.0f</span>)));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L605">
      <a href="#L605">605</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L606">
      <a href="#L606">606</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> speed;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L607">
      <a href="#L607">607</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L608">
      <a href="#L608">608</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L609">
      <a href="#L609">609</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">float</span> CCLayerPanZoom::vertSpeedWithPosition(<span class="local-variable">CCPoint</span> pos){
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L610">
      <a href="#L610">610</a>
    </th>
    <td class="line-code">
      <pre>    CCLayerPanZoomFrameEdge edge = <span class="directive">this</span>-&gt;frameEdgeWithPoint(pos);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L611">
      <a href="#L611">611</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> speed = <span class="float">0</span><span class="float">.0f</span>;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L612">
      <a href="#L612">612</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (edge == kCCLayerPanZoomFrameEdgeBottom)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L613">
      <a href="#L613">613</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L614">
      <a href="#L614">614</a>
    </th>
    <td class="line-code">
      <pre>        speed = _minSpeed + (_maxSpeed - _minSpeed) * 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L615">
      <a href="#L615">615</a>
    </th>
    <td class="line-code">
      <pre>            (_panBoundsRect.origin.y + _bottomFrameMargin - pos.y) / _bottomFrameMargin;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L616">
      <a href="#L616">616</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L617">
      <a href="#L617">617</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (edge == kCCLayerPanZoomFrameEdgeBottomLeft || edge == kCCLayerPanZoomFrameEdgeBottomRight)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L618">
      <a href="#L618">618</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L619">
      <a href="#L619">619</a>
    </th>
    <td class="line-code">
      <pre>        speed = _minSpeed + (_maxSpeed - _minSpeed) * 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L620">
      <a href="#L620">620</a>
    </th>
    <td class="line-code">
      <pre>            (_panBoundsRect.origin.y + _bottomFrameMargin - pos.y) / (_bottomFrameMargin * sqrt(<span class="float">2</span><span class="float">.0f</span>));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L621">
      <a href="#L621">621</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L622">
      <a href="#L622">622</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (edge == kCCLayerPanZoomFrameEdgeTop)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L623">
      <a href="#L623">623</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L624">
      <a href="#L624">624</a>
    </th>
    <td class="line-code">
      <pre>        speed = - (_minSpeed + (_maxSpeed - _minSpeed) * 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L625">
      <a href="#L625">625</a>
    </th>
    <td class="line-code">
      <pre>            (pos.y - _panBoundsRect.origin.y - _panBoundsRect.size.height + 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L626">
      <a href="#L626">626</a>
    </th>
    <td class="line-code">
      <pre>            _topFrameMargin) / _topFrameMargin);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L627">
      <a href="#L627">627</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L628">
      <a href="#L628">628</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">if</span> (edge == kCCLayerPanZoomFrameEdgeTopLeft || edge == kCCLayerPanZoomFrameEdgeTopRight)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L629">
      <a href="#L629">629</a>
    </th>
    <td class="line-code">
      <pre>    {
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L630">
      <a href="#L630">630</a>
    </th>
    <td class="line-code">
      <pre>        speed = - (_minSpeed + (_maxSpeed - _minSpeed) * 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L631">
      <a href="#L631">631</a>
    </th>
    <td class="line-code">
      <pre>            (pos.y - _panBoundsRect.origin.y - _panBoundsRect.size.height + 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L632">
      <a href="#L632">632</a>
    </th>
    <td class="line-code">
      <pre>            _topFrameMargin) / (_topFrameMargin * sqrt(<span class="float">2</span><span class="float">.0f</span>)));
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L633">
      <a href="#L633">633</a>
    </th>
    <td class="line-code">
      <pre>    }
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L634">
      <a href="#L634">634</a>
    </th>
    <td class="line-code">
      <pre>    <span class="keyword">return</span> speed;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L635">
      <a href="#L635">635</a>
    </th>
    <td class="line-code">
      <pre>} 
</pre>
    </td>
  </tr>
  

</tbody>
</table>
</div>




 
        
        <div style="clear:both;"></div>
    </div>
</div>

<div id="ajax-indicator" style="display:none;"><span>Lade...</span></div>

<div id="footer">
  <div class="bgl"><div class="bgr">
    Powered by BitNami <a href="http://bitnami.org/stack/redmine">Redmine</a> &copy; 2006-2011 Jean-Philippe Lang
  </div></div>
</div>
</div>
</div>

</body>
</html>
