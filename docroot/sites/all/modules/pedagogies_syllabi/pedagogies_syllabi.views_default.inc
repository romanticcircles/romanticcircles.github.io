<?php
/**
 * @file
 * pedagogies_syllabi.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pedagogies_syllabi_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'online_syllabi';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Online Syllabi';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Online Syllabi';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_syllabi_categories_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_syllabi_categories',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_authored_by_secondary_' => 'field_authored_by_secondary_',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>This page presents a collection of links to course information and/or the syllabi for Romantics courses—including courses that extend back into the long eighteenth century (1660-1830) and forward into the nineteenth century. We hope that looking at the course sites below will help stimulate ideas for teaching and discussion among Romanticists about pedagogy.</p>';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<br/>
<hr size="1"/>
<br/>
<h2>External Syllabi</h2>
<p><em>NOTE: The syllabi below are all external links, many of which no longer have current homes on the Web. Where possible, we have used the Wayback Machine at www.archive.org in order to recover these lost syllabi. We\'ve marked these instances with an asterisk.</em></p>
<p><em>Romantic Circles\' online syllabi were originally compiled by Laura Mandell and Vince Willoughby.</em></p>

<h3><a name="meta" id="meta"> </a>Meta-Pages</h3>&#13;
<p><a href="http://oldsite.english.ucsb.edu/faculty/ayliu/research/canonweb.html">Canon Dreaming</a>: links to syllabi either revisionary or self-reflexive in regard to canonicity (Alan Liu, UC Santa Barbara, and Laura Mandell, Miami U, Ohio)</p>&#13;
<p><a href="http://vos.ucsb.edu/browse.asp?id=590">Voice of the Shuttle: Romantics Course Syllabi &amp; Teaching Resources</a> (Alan Liu, UC Santa Barbara)</p>&#13;

<h3><a name="general" id="general"> </a>General Courses on Romanticism</h3>&#13;
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/551/2001syllabus.html">British Literature, 1770-1800 / Graduate Class</a> (Michael Gamer, U Penna.)</p>&#13;
<p><a href="https://web.archive.org/web/20060113151629/http://www.otus.oakland.edu/english/anderson/eng371.htm">British Literature of the Romantic Period</a>* (Robert Anderson, Oakland U)</p>&#13;
<p><a href="https://web.archive.org/web/20040404082509/http://www2.gasou.edu/facstaff/dougt/romantic.htm">British Romanticism</a>* (Doug Thomson, Georgia Southern U)</p>&#13;
<p><a href="http://www.english.upenn.edu/%7Ecurran/552/syllab99.html">British Writers: 1801-1830</a> (Stuart Curran, U Penn)</p>&#13;
<p><a href="http://www.luc.edu/faculty/sjones1/411.html">Early and Late Romantic Poetry</a> (Steven E. Jones, Loyola U, Chicago)</p>&#13;
<p><a href="https://web.archive.org/web/20050216083118/http://virtual.park.uga.edu/~nhilton/450.html">Early Romantic Literature</a>* (Nelson Hilton, U Georgia)</p>&#13;
<p>The Early Romantic Period: 1789 to 1816 -- <a href="http://www.users.muohio.edu/mandellc/eng441/index.html">Fall 1996</a>; <a href="http://www.users.muohio.edu/mandellc/eng441b/">Fall 1997</a> (Laura Mandell, Miami U, Ohio)</p>&#13;
<p><a href="http://www4.ncsu.edu/unity/users/m/morillo/public/650syl.htm">English Romantic Literature</a> (John Morillo, North Carolina State U)</p>&#13;
<p><a href="https://web.archive.org/web/20050302220553/http://www.english.swt.edu/Rosenbalm/romantics/english%20romantics.htm">The English Romantics</a>* (Jack Rosenbalm, Southwest Texas State U)</p>&#13;
<p><a href="https://web.archive.org/web/20010702193743/http://www.baylor.edu/~Jesse_Airaudi/4352_01sp99.html">The Later Romantic Period</a>* (Jesse Airaudi, Baylor U)</p>&#13;
<p><a href="http://www.luc.edu/faculty/sjones1/335.html">Literature of the Romantic Period</a> (Steven E. Jones, Loyola U, Chicago)</p>&#13;
<p><a href="https://web.archive.org/web/20050922011923/http://www.unl.edu/sbehrend/html/sbsite/courses/365/index.htm">Nineteenth-Century British Prose and Poetry, Fall 1998</a>* (Stephen C. Behrendt, U Nebraska)</p>&#13;
<p><a href="https://web.archive.org/web/20051122032946/http://www.unl.edu/sbehrend/html/sbsite/courses/365/indexF99.htm">Nineteenth-Century British Prose and Poetry, Fall 1999</a>* (Stephen C. Behrendt, U Nebraska)</p>&#13;
<p><a href="https://web.archive.org/web/20051118170227/http://www.rc.umd.edu/nfraistat/courses/624/syllabus.html">Readings in Romantic Literature</a>* (Neil Fraistat, U Maryland)</p>&#13;
<p><a href="/sites/default/files/imported/pedagogies/commons/ecology/stroup/stroup_romsyl.pdf">Readings in British Literature: Romanticism</a> [PDF] (William Stroup, Keane State College)</p>&#13;
<p><a href="https://web.archive.org/web/20080511163055/http://www.providence.edu/eng/graver/351.html">The Romantic Age</a>* (Bruce Graver, Providence College)</p>&#13;
<p><a href="https://web.archive.org/web/20051120084033/http://www.unl.edu/sbehrend/html/sbsite/courses/4865/index.htm">Romanticism</a>* (Stephen C. Behrendt, U Nebraska)</p>&#13;
<p><a href="https://web.archive.org/web/20050425175748/http://www.people.vcu.edu/~dlatane/973-321.html">Romantic Literature</a>* (David Latane, Virginia Commonwealth U)</p>&#13;
<p><a href="http://orion.it.luc.edu/%7Esjones1/335.htm">The Romantic Period</a> (Steven E. Jones, Loyola U Chicago)</p>&#13;
<p><a href="https://web.archive.org/web/20050319091536/http://faculty.washington.edu/nh2/classes/ENG308Y.html">Romantic Poetry and Prose</a>* (Nicholas Halmi, U of Washington)</p>&#13;
<p><a href="https://web.archive.org/web/20040604110453/http://dept.english.upenn.edu/~mgamer/Teaching/50/syllabus1996.html">Romantic Poets</a>* (Michael Gamer, U Penn)</p>&#13;
<p><a href="https://web.archive.org/web/20060911085407/http://web.ics.purdue.edu/~dianna/">Romantic Writings</a>* (Dianna Gilroy, Purdue U)</p>&#13;
<p><a href="https://web.archive.org/web/20070204084925/http://www.unm.edu/~garyh/courses/556.html">Studies in British Romanticism</a>* (Gary Harrison, U New Mexico)</p>&#13;
<p><a href="/pedagogies/commons/ecology/brownlow/english382.html">Studies in British Romanticism</a> (Timothy Brownlow, Malaspina University-College)</p>&#13;
<p><a href="https://web.archive.org/web/20061118173108/http://www.jsu.edu/depart/english/jhjones/eh558/index.htm">Studies in Romantic Literature</a>* (John H. Jones, Jacksonville State U)</p>&#13;
<p><a href="http://orion.it.luc.edu/%7Esjones1/sj338r.htm">Studies in the Romantic Period (on the web)</a> (Steven Jones, Loyola U, Chicago)</p>&#13;
<h3><a name="authors" id="authors"> </a>Authors</h3>&#13;
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/299/2002syllabus.html">English 299: Jane Austen and the Romantic Novel</a> (Michael Gamer, U Penna)</p>&#13;
<p><a href="https://web.archive.org/web/20050425180000/http://www.people.vcu.edu/~dlatane/jane.html">The Novels of Jane Austen</a>* (David Latane, Virginia Commonwealth U)</p>&#13;
<p><a href="https://web.archive.org/web/20041205001325/http://www.unl.edu/sbehrend/html/sbsite/courses/Blake/WBindex.htm">William Blake</a>* (Stephen C. Behrendt, U Nebraska)</p>&#13;
<p><a href="https://web.archive.org/web/20061118173222/http://www.jsu.edu/depart/english/jhjones/eh422m/index.htm">William Blake\'s Illuminated Poetry</a>* (John H. Jones, Jacksonville State U)</p>&#13;
<p><a href="http://www.utm.utoronto.ca/%7Edwhite/syl360.htm">Romantic Conversations: Percy Bysshe and Mary Wollstonecraft Godwin Shelley</a> (Dan E. White, U Toronto)</p>&#13;
<p><a href="https://web.archive.org/web/20080630002814/http://www.otus.oakland.edu/english/anderson/eng452.htm">Wordsworth and Keats</a>* (Robert Anderson, Oakland U)</p>&#13;
<p><a href="https://web.archive.org/web/20051204085627/http://faculty.washington.edu/nh2/classes/4ns3.html">Wordsworth and Shelley</a>* (Nicholas Halmi, U of Washington)</p>&#13;

<h3><a name="canon" id="canon"> </a>Canon</h3>&#13;
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/550/2000syllabus.html">English 550-301: Authorship, Collaboration, and Literary Property</a> (Michael Gamer, U Penna)</p>&#13;
<p><a href="http://oldsite.english.ucsb.edu/faculty/ayliu/courses/f98/eng236can/canonrev.html">Canon Revision: History, Theory, Practice</a> (Alan Liu, U California Santa Barbara)</p>&#13;
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/750/syllabus1996.html">English 750: Romantic Communities: Poetry, Publishing, and Romanticism</a> (Michael Gamer, U Penna)</p>&#13;

<h3><a name="18thc" id="18thc"> </a>Eighteenth-Century Literature</h3>&#13;
<p><a href="http://andromeda.rutgers.edu/%7Ejlynch/00/349/">The Eighteenth-Century English Novel</a> (Jack Lynch, Rutgers U)</p>&#13;
<p><a href="http://andromeda.rutgers.edu/%7Ejlynch/98/325/">English Literature, 1600-1745</a> (Jack Lynch, Rutgers U)</p>&#13;
<p><a href="http://andromeda.rutgers.edu/%7Ejlynch/99/326/">English Literature, 1745-1800</a> (Jack Lynch, Rutgers U)</p>&#13;
<p><a href="http://www.utm.utoronto.ca/%7Edwhite/syl22200a.htm">Restoration to Romanticism</a> (Dan White, U Toronto)</p>

<h3><a name="gender" id="gender"> </a>Gender</h3>
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/250/syllabus1997.html">Gender, Law, and the Gothic</a> (Michael Gamer, U Penn)</p>

<h3><a name="genre" id="genre"> </a>Genre</h3>
<p><a href="http://web.ics.purdue.edu/~felluga/genre.html">Genres of Romanticism</a> (Dino Felluga, Purdue U)</p>
<p><a href="http://www.english.upenn.edu/~mgamer/Teaching/250/syllabus1998.html">The Romantic Poem and the Romantic Book</a> (Michael Gamer, U Penn)</p>

<h3><a name="gothic" id="gothic"> </a>Gothic</h3>
<p><a href="http://www.english.upenn.edu/~mgamer/Teaching/250/syllabus1997.html">Gender, Law, and the Gothic</a> (Michael Gamer, U Penn)</p>
<p><a href="http://web.archive.org/web/20001006030149/http://www.ualberta.ca/~dmiall/gothic.htm">Gothic Fiction</a>* (David S. Miall, U Alberta)</p>
<p><a href="http://web.archive.org/web/20040604111206/http://dept.english.upenn.edu/~mgamer/Teaching/550/syllabus1995.html">Gothicism and Romanticism</a>* (Michael Gamer, U Penn)</p>
<p><a href="https://www2.bc.edu/~richarad/en563.html">The Gothic and Romantic Novel</a> (Alan Richardson, Boston College)</p>

<h3><a name="industrial" id="industrial"> </a>The Industrial Revolution</h3>
<p><a href="http://orion.it.luc.edu/~sjones1/470.htm">Industrial Romanticism</a> (Steven E. Jones, U Loyola, Chicago)</p>

<h3><a name="nationalism" id="nationalism"> </a>Nationalism</h3>
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/345/2000syllabus.html">English 345: The National Tale</a> (Michael Gamer, U Penna)</p>

<h3><a name="novel" id="novel"> </a>The Novel</h3><p><a href="http://locutus.ucr.edu/~cathy/syll/womwrit.html">British Women\'s Novels, 1782-1807</a> (Catherine Decker, Chaffey College)</p>
<p><a href="http://andromeda.rutgers.edu/~jlynch/00/349/">The Eighteenth-Century English Novel</a> (Jack Lynch, Rutgers U)</p>
<p><a href="http://web.archive.org/web/20100612130810/http://www2.bc.edu/~richarad/en563.html">The Gothic and Romantic Novel</a>* (Alan Richardson, Boston College)</p>
<p><a href="http://www2.iath.virginia.edu/courses/enec981/enec981.html">The Novel of Sensibility</a> (Jerome McGann and Patricia Spacks, U Virginia)</p>
<p><a href="http://www.utm.utoronto.ca/~dwhite/syl470.htm">Reading Modernity in the Eighteenth-Century Novel</a> (Dan E. White, U Toronto)</p>

<h3><a name="poetry" id="poetry"> </a>Poetry</h3>
<p><a href="http://web.archive.org/web/20050319162306/http://www.unl.edu/sbehrend/html/sbsite/courses/4802/index.htm">British Poetry of the Romantic Period</a>* (Stephen C. Behrendt, U Nebraska)</p>
<p><a href="http://web.archive.org/web/20050906063502/http://faculty.washington.edu/nh2/classes/3mo3.html">Romantic Poetry</a>* (Nicholas Halmi, U of Washington)</p>

<h3><a name="poplit" id="poplit"> </a>Popular Literature</h3>
<p><a href="http://mh.cla.umn.edu/prosstre.html">Street Ballads</a> (Michael Hancher, U Minnesota Twin Cities)</p>

<h3><a name="historical" id="historical"> </a>Romanticism in Historical Context</h3>
<p><a href="http://web.archive.org/web/20040604110102/http://dept.english.upenn.edu/~mgamer/Teaching/50/syllabus1995.html">The Enlightened Sublime: Poetry and the French Revolution</a>* (Michael Gamer, U Penn)</p>
<p><a href="http://web.archive.org/web/20040604103342/http://dept.english.upenn.edu/~esimpson/Teaching/Romantics/romantics.html">Romance and Revolution: The Romantic Novel in Context</a>* (Erik Simpson, U Penn)</p>
<p><a href="http://web.archive.org/web/20040604092232/http://dept.english.upenn.edu/~mgamer/Teaching/750/syllabus1996.html">Romantic Communities: Authorship, Publishing, and the Production of Romantic Poetry, 1785-1800</a> (Michael Gamer, U Penn)</p>
<p><a href="http://web.archive.org/web/20050228121849/http://otal.umd.edu/~fraistat/romrev/engl738ahome.html">Romanticism and Revolution, 1789-1807</a>* (Neil Fraistat and Susan Sniader Lanser, U Maryland)</p>
<p><a href="http://web.archive.org/web/20100612130724/http://www2.bc.edu/~richarad/849.html">Romantic Texts and Contexts</a>* (Alan Richardson, Boston College)</p>

<h3><a name="sensibility" id="sensibility"> </a>Sensibility</h3>&#13;
<p><a href="http://www2.iath.virginia.edu/courses/enec981/enec981.html">The Novel of Sensibility</a> (Jerome McGann and Patricia Spacks, U Virginia)</p>&#13;
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/241/syllabus1998.html">Sensibility and Its Discontents</a> (Michael Gamer, U Penn)</p>&#13;

<h3><a name="sublime" id="sublime"> </a>The Sublime</h3>&#13;
<p><a href="http://www.users.muohio.edu/mandellc/eng495/495syll.htm">The Sublime, the Beautiful, and the Picturesque in Eighteenth-Century England</a> (Laura Mandell, Miami U Ohio)</p>&#13;

<h3><a name="transatlantic" id="transatlantic"> </a>Transatlantic</h3>&#13;
<p><a href="http://www.users.muohio.edu/mandellc/eng710/PolAffectSyll.htm">The Politics of Affect</a> (Laura Mandell, Miami U Ohio; Lori Merish, Georgetown)</p>&#13;
<p><a href="http://www.users.muohio.edu/mandellc/eng710/transatlantic.htm">Transatlantic Sentimental Poetry: The Popular Poetess, 1770-1850</a> (Laura Mandell, Annie Finch, Miami U of Ohio)</p>&#13;
<h3><a name="trans" id="trans"> </a>Transromanticism: Romanticism and Topics from Other Disciplines or Historical Periods</h3>&#13;
<p><a href="http://www2.iath.virginia.edu/courses/ennc491/ennc491.html">Incarnate Textualities: Blake, Dickinson, D.G. Rossetti</a> (Jerome McGann, U Virginia)</p>&#13;
<p><a href="https://web.archive.org/web/20020604051332/http://icdweb.cc.purdue.edu/~felluga/medievalism.html">Nineteenth-Century Medievalism</a>* (Dino Felluga, Purdue U)</p>&#13;
<p><a href="https://web.archive.org/web/20020604053501/http://icdweb.cc.purdue.edu/~felluga/tech.html">Technology of the Book</a>* (Dino Felluga, Purdue U)</p>&#13;
<p><a href="https://web.archive.org/web/20060912135448/http://media.dickinson.edu/english/ww&hardy.html">Wordsworth and Hardy</a>* (Ashton Nichols, Dickinson C)</p>&#13;
<p><a href="http://lmc.gatech.edu/~broglio/1101/">Writing About Visionary Selves and Virtual Landscapes</a> (Ron S. Broglio, Georgia Institute of Technololgy)</p>&#13;

<h3><a name="women" id="women"> </a>Women Writers</h3>&#13;
<p><a href="https://web.archive.org/web/20100726113952/http://hal.ucr.edu/~cathy/syll/womwrit.html">British Women\'s Novels, 1782-1807</a> (Catherine Decker, Chaffy College)</p>&#13;

<h3><a name="pedagogical" id="pedagogical"> </a>Pedagogical Issues</h3>&#13;
<p><a href="http://lmc.gatech.edu/~broglio/eromantic/">Romantic Text/Electronic Text: Designing a New Pedagogical Practice for Romantic Studies</a> (Ron S. Broglio and Bill Ruegg, U Florida)</p>
';
  $handler->display->display_options['footer']['area']['format'] = '3';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'syllabi_categories' => 'syllabi_categories',
    'vocabulary_52' => 0,
    'author_primary_' => 0,
    'author' => 0,
    'editor' => 0,
    'person' => 0,
    'vocabulary_3' => 0,
    'city' => 0,
    'vocabulary_59' => 0,
    'vocabulary_60' => 0,
    'vocabulary_62' => 0,
    'creation_technique' => 0,
    'exhibit_categories' => 0,
    'flagged_gallery_categories' => 0,
    'gallery_locations' => 0,
    'gallery_review_journals' => 0,
    'gallery_tags' => 0,
    'nines_discipline' => 0,
    'nines_genre' => 0,
    'nines_type' => 0,
    'vocabulary_63' => 0,
    'style' => 0,
    'support_medium' => 0,
    'video_categories' => 0,
    'vocabulary_61' => 0,
    'academic_interests' => 0,
    'audio_categories' => 0,
    'continent' => 0,
    'country' => 0,
    'movie' => 0,
    'music_album' => 0,
    'music_group' => 0,
    'natural_feature' => 0,
    'organization' => 0,
    'province_or_state' => 0,
    'region' => 0,
    'vocabulary_64' => 0,
  );
  /* Field: Content: Syllabi Categories */
  $handler->display->display_options['fields']['field_syllabi_categories']['id'] = 'field_syllabi_categories';
  $handler->display->display_options['fields']['field_syllabi_categories']['table'] = 'field_data_field_syllabi_categories';
  $handler->display->display_options['fields']['field_syllabi_categories']['field'] = 'field_syllabi_categories';
  $handler->display->display_options['fields']['field_syllabi_categories']['label'] = '';
  $handler->display->display_options['fields']['field_syllabi_categories']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_syllabi_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_syllabi_categories']['empty'] = 'Uncategorized';
  $handler->display->display_options['fields']['field_syllabi_categories']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Authored by (Secondary) */
  $handler->display->display_options['fields']['field_authored_by_secondary_']['id'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['field'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['label'] = '';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_secondary_']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_authored_by_secondary_']['delta_offset'] = '0';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Tags (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['value'] = array(
    0 => '3601',
    1 => '3600',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pedagogies/syllabi/online-syllabi';
  $handler->display->display_options['menu']['title'] = 'Online Syllabi';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-pedagogies';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'online-syllabi.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $translatables['online_syllabi'] = array(
    t('Master'),
    t('Online Syllabi'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<p>This page presents a collection of links to course information and/or the syllabi for Romantics courses—including courses that extend back into the long eighteenth century (1660-1830) and forward into the nineteenth century. We hope that looking at the course sites below will help stimulate ideas for teaching and discussion among Romanticists about pedagogy.</p>'),
    t('<br/>
<hr size="1"/>
<br/>
<h2>External Syllabi</h2>
<p><em>NOTE: The syllabi below are all external links, many of which no longer have current homes on the Web. Where possible, we have used the Wayback Machine at www.archive.org in order to recover these lost syllabi. We\'ve marked these instances with an asterisk.</em></p>
<p><em>Romantic Circles\' online syllabi were originally compiled by Laura Mandell and Vince Willoughby.</em></p>

<h3><a name="meta" id="meta"> </a>Meta-Pages</h3>&#13;
<p><a href="http://oldsite.english.ucsb.edu/faculty/ayliu/research/canonweb.html">Canon Dreaming</a>: links to syllabi either revisionary or self-reflexive in regard to canonicity (Alan Liu, UC Santa Barbara, and Laura Mandell, Miami U, Ohio)</p>&#13;
<p><a href="http://vos.ucsb.edu/browse.asp?id=590">Voice of the Shuttle: Romantics Course Syllabi &amp; Teaching Resources</a> (Alan Liu, UC Santa Barbara)</p>&#13;

<h3><a name="general" id="general"> </a>General Courses on Romanticism</h3>&#13;
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/551/2001syllabus.html">British Literature, 1770-1800 / Graduate Class</a> (Michael Gamer, U Penna.)</p>&#13;
<p><a href="https://web.archive.org/web/20060113151629/http://www.otus.oakland.edu/english/anderson/eng371.htm">British Literature of the Romantic Period</a>* (Robert Anderson, Oakland U)</p>&#13;
<p><a href="https://web.archive.org/web/20040404082509/http://www2.gasou.edu/facstaff/dougt/romantic.htm">British Romanticism</a>* (Doug Thomson, Georgia Southern U)</p>&#13;
<p><a href="http://www.english.upenn.edu/%7Ecurran/552/syllab99.html">British Writers: 1801-1830</a> (Stuart Curran, U Penn)</p>&#13;
<p><a href="http://www.luc.edu/faculty/sjones1/411.html">Early and Late Romantic Poetry</a> (Steven E. Jones, Loyola U, Chicago)</p>&#13;
<p><a href="https://web.archive.org/web/20050216083118/http://virtual.park.uga.edu/~nhilton/450.html">Early Romantic Literature</a>* (Nelson Hilton, U Georgia)</p>&#13;
<p>The Early Romantic Period: 1789 to 1816 -- <a href="http://www.users.muohio.edu/mandellc/eng441/index.html">Fall 1996</a>; <a href="http://www.users.muohio.edu/mandellc/eng441b/">Fall 1997</a> (Laura Mandell, Miami U, Ohio)</p>&#13;
<p><a href="http://www4.ncsu.edu/unity/users/m/morillo/public/650syl.htm">English Romantic Literature</a> (John Morillo, North Carolina State U)</p>&#13;
<p><a href="https://web.archive.org/web/20050302220553/http://www.english.swt.edu/Rosenbalm/romantics/english%20romantics.htm">The English Romantics</a>* (Jack Rosenbalm, Southwest Texas State U)</p>&#13;
<p><a href="https://web.archive.org/web/20010702193743/http://www.baylor.edu/~Jesse_Airaudi/4352_01sp99.html">The Later Romantic Period</a>* (Jesse Airaudi, Baylor U)</p>&#13;
<p><a href="http://www.luc.edu/faculty/sjones1/335.html">Literature of the Romantic Period</a> (Steven E. Jones, Loyola U, Chicago)</p>&#13;
<p><a href="https://web.archive.org/web/20050922011923/http://www.unl.edu/sbehrend/html/sbsite/courses/365/index.htm">Nineteenth-Century British Prose and Poetry, Fall 1998</a>* (Stephen C. Behrendt, U Nebraska)</p>&#13;
<p><a href="https://web.archive.org/web/20051122032946/http://www.unl.edu/sbehrend/html/sbsite/courses/365/indexF99.htm">Nineteenth-Century British Prose and Poetry, Fall 1999</a>* (Stephen C. Behrendt, U Nebraska)</p>&#13;
<p><a href="https://web.archive.org/web/20051118170227/http://www.rc.umd.edu/nfraistat/courses/624/syllabus.html">Readings in Romantic Literature</a>* (Neil Fraistat, U Maryland)</p>&#13;
<p><a href="/sites/default/files/imported/pedagogies/commons/ecology/stroup/stroup_romsyl.pdf">Readings in British Literature: Romanticism</a> [PDF] (William Stroup, Keane State College)</p>&#13;
<p><a href="https://web.archive.org/web/20080511163055/http://www.providence.edu/eng/graver/351.html">The Romantic Age</a>* (Bruce Graver, Providence College)</p>&#13;
<p><a href="https://web.archive.org/web/20051120084033/http://www.unl.edu/sbehrend/html/sbsite/courses/4865/index.htm">Romanticism</a>* (Stephen C. Behrendt, U Nebraska)</p>&#13;
<p><a href="https://web.archive.org/web/20050425175748/http://www.people.vcu.edu/~dlatane/973-321.html">Romantic Literature</a>* (David Latane, Virginia Commonwealth U)</p>&#13;
<p><a href="http://orion.it.luc.edu/%7Esjones1/335.htm">The Romantic Period</a> (Steven E. Jones, Loyola U Chicago)</p>&#13;
<p><a href="https://web.archive.org/web/20050319091536/http://faculty.washington.edu/nh2/classes/ENG308Y.html">Romantic Poetry and Prose</a>* (Nicholas Halmi, U of Washington)</p>&#13;
<p><a href="https://web.archive.org/web/20040604110453/http://dept.english.upenn.edu/~mgamer/Teaching/50/syllabus1996.html">Romantic Poets</a>* (Michael Gamer, U Penn)</p>&#13;
<p><a href="https://web.archive.org/web/20060911085407/http://web.ics.purdue.edu/~dianna/">Romantic Writings</a>* (Dianna Gilroy, Purdue U)</p>&#13;
<p><a href="https://web.archive.org/web/20070204084925/http://www.unm.edu/~garyh/courses/556.html">Studies in British Romanticism</a>* (Gary Harrison, U New Mexico)</p>&#13;
<p><a href="/pedagogies/commons/ecology/brownlow/english382.html">Studies in British Romanticism</a> (Timothy Brownlow, Malaspina University-College)</p>&#13;
<p><a href="https://web.archive.org/web/20061118173108/http://www.jsu.edu/depart/english/jhjones/eh558/index.htm">Studies in Romantic Literature</a>* (John H. Jones, Jacksonville State U)</p>&#13;
<p><a href="http://orion.it.luc.edu/%7Esjones1/sj338r.htm">Studies in the Romantic Period (on the web)</a> (Steven Jones, Loyola U, Chicago)</p>&#13;
<h3><a name="authors" id="authors"> </a>Authors</h3>&#13;
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/299/2002syllabus.html">English 299: Jane Austen and the Romantic Novel</a> (Michael Gamer, U Penna)</p>&#13;
<p><a href="https://web.archive.org/web/20050425180000/http://www.people.vcu.edu/~dlatane/jane.html">The Novels of Jane Austen</a>* (David Latane, Virginia Commonwealth U)</p>&#13;
<p><a href="https://web.archive.org/web/20041205001325/http://www.unl.edu/sbehrend/html/sbsite/courses/Blake/WBindex.htm">William Blake</a>* (Stephen C. Behrendt, U Nebraska)</p>&#13;
<p><a href="https://web.archive.org/web/20061118173222/http://www.jsu.edu/depart/english/jhjones/eh422m/index.htm">William Blake\'s Illuminated Poetry</a>* (John H. Jones, Jacksonville State U)</p>&#13;
<p><a href="http://www.utm.utoronto.ca/%7Edwhite/syl360.htm">Romantic Conversations: Percy Bysshe and Mary Wollstonecraft Godwin Shelley</a> (Dan E. White, U Toronto)</p>&#13;
<p><a href="https://web.archive.org/web/20080630002814/http://www.otus.oakland.edu/english/anderson/eng452.htm">Wordsworth and Keats</a>* (Robert Anderson, Oakland U)</p>&#13;
<p><a href="https://web.archive.org/web/20051204085627/http://faculty.washington.edu/nh2/classes/4ns3.html">Wordsworth and Shelley</a>* (Nicholas Halmi, U of Washington)</p>&#13;

<h3><a name="canon" id="canon"> </a>Canon</h3>&#13;
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/550/2000syllabus.html">English 550-301: Authorship, Collaboration, and Literary Property</a> (Michael Gamer, U Penna)</p>&#13;
<p><a href="http://oldsite.english.ucsb.edu/faculty/ayliu/courses/f98/eng236can/canonrev.html">Canon Revision: History, Theory, Practice</a> (Alan Liu, U California Santa Barbara)</p>&#13;
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/750/syllabus1996.html">English 750: Romantic Communities: Poetry, Publishing, and Romanticism</a> (Michael Gamer, U Penna)</p>&#13;

<h3><a name="18thc" id="18thc"> </a>Eighteenth-Century Literature</h3>&#13;
<p><a href="http://andromeda.rutgers.edu/%7Ejlynch/00/349/">The Eighteenth-Century English Novel</a> (Jack Lynch, Rutgers U)</p>&#13;
<p><a href="http://andromeda.rutgers.edu/%7Ejlynch/98/325/">English Literature, 1600-1745</a> (Jack Lynch, Rutgers U)</p>&#13;
<p><a href="http://andromeda.rutgers.edu/%7Ejlynch/99/326/">English Literature, 1745-1800</a> (Jack Lynch, Rutgers U)</p>&#13;
<p><a href="http://www.utm.utoronto.ca/%7Edwhite/syl22200a.htm">Restoration to Romanticism</a> (Dan White, U Toronto)</p>

<h3><a name="gender" id="gender"> </a>Gender</h3>
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/250/syllabus1997.html">Gender, Law, and the Gothic</a> (Michael Gamer, U Penn)</p>

<h3><a name="genre" id="genre"> </a>Genre</h3>
<p><a href="http://web.ics.purdue.edu/~felluga/genre.html">Genres of Romanticism</a> (Dino Felluga, Purdue U)</p>
<p><a href="http://www.english.upenn.edu/~mgamer/Teaching/250/syllabus1998.html">The Romantic Poem and the Romantic Book</a> (Michael Gamer, U Penn)</p>

<h3><a name="gothic" id="gothic"> </a>Gothic</h3>
<p><a href="http://www.english.upenn.edu/~mgamer/Teaching/250/syllabus1997.html">Gender, Law, and the Gothic</a> (Michael Gamer, U Penn)</p>
<p><a href="http://web.archive.org/web/20001006030149/http://www.ualberta.ca/~dmiall/gothic.htm">Gothic Fiction</a>* (David S. Miall, U Alberta)</p>
<p><a href="http://web.archive.org/web/20040604111206/http://dept.english.upenn.edu/~mgamer/Teaching/550/syllabus1995.html">Gothicism and Romanticism</a>* (Michael Gamer, U Penn)</p>
<p><a href="https://www2.bc.edu/~richarad/en563.html">The Gothic and Romantic Novel</a> (Alan Richardson, Boston College)</p>

<h3><a name="industrial" id="industrial"> </a>The Industrial Revolution</h3>
<p><a href="http://orion.it.luc.edu/~sjones1/470.htm">Industrial Romanticism</a> (Steven E. Jones, U Loyola, Chicago)</p>

<h3><a name="nationalism" id="nationalism"> </a>Nationalism</h3>
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/345/2000syllabus.html">English 345: The National Tale</a> (Michael Gamer, U Penna)</p>

<h3><a name="novel" id="novel"> </a>The Novel</h3><p><a href="http://locutus.ucr.edu/~cathy/syll/womwrit.html">British Women\'s Novels, 1782-1807</a> (Catherine Decker, Chaffey College)</p>
<p><a href="http://andromeda.rutgers.edu/~jlynch/00/349/">The Eighteenth-Century English Novel</a> (Jack Lynch, Rutgers U)</p>
<p><a href="http://web.archive.org/web/20100612130810/http://www2.bc.edu/~richarad/en563.html">The Gothic and Romantic Novel</a>* (Alan Richardson, Boston College)</p>
<p><a href="http://www2.iath.virginia.edu/courses/enec981/enec981.html">The Novel of Sensibility</a> (Jerome McGann and Patricia Spacks, U Virginia)</p>
<p><a href="http://www.utm.utoronto.ca/~dwhite/syl470.htm">Reading Modernity in the Eighteenth-Century Novel</a> (Dan E. White, U Toronto)</p>

<h3><a name="poetry" id="poetry"> </a>Poetry</h3>
<p><a href="http://web.archive.org/web/20050319162306/http://www.unl.edu/sbehrend/html/sbsite/courses/4802/index.htm">British Poetry of the Romantic Period</a>* (Stephen C. Behrendt, U Nebraska)</p>
<p><a href="http://web.archive.org/web/20050906063502/http://faculty.washington.edu/nh2/classes/3mo3.html">Romantic Poetry</a>* (Nicholas Halmi, U of Washington)</p>

<h3><a name="poplit" id="poplit"> </a>Popular Literature</h3>
<p><a href="http://mh.cla.umn.edu/prosstre.html">Street Ballads</a> (Michael Hancher, U Minnesota Twin Cities)</p>

<h3><a name="historical" id="historical"> </a>Romanticism in Historical Context</h3>
<p><a href="http://web.archive.org/web/20040604110102/http://dept.english.upenn.edu/~mgamer/Teaching/50/syllabus1995.html">The Enlightened Sublime: Poetry and the French Revolution</a>* (Michael Gamer, U Penn)</p>
<p><a href="http://web.archive.org/web/20040604103342/http://dept.english.upenn.edu/~esimpson/Teaching/Romantics/romantics.html">Romance and Revolution: The Romantic Novel in Context</a>* (Erik Simpson, U Penn)</p>
<p><a href="http://web.archive.org/web/20040604092232/http://dept.english.upenn.edu/~mgamer/Teaching/750/syllabus1996.html">Romantic Communities: Authorship, Publishing, and the Production of Romantic Poetry, 1785-1800</a> (Michael Gamer, U Penn)</p>
<p><a href="http://web.archive.org/web/20050228121849/http://otal.umd.edu/~fraistat/romrev/engl738ahome.html">Romanticism and Revolution, 1789-1807</a>* (Neil Fraistat and Susan Sniader Lanser, U Maryland)</p>
<p><a href="http://web.archive.org/web/20100612130724/http://www2.bc.edu/~richarad/849.html">Romantic Texts and Contexts</a>* (Alan Richardson, Boston College)</p>

<h3><a name="sensibility" id="sensibility"> </a>Sensibility</h3>&#13;
<p><a href="http://www2.iath.virginia.edu/courses/enec981/enec981.html">The Novel of Sensibility</a> (Jerome McGann and Patricia Spacks, U Virginia)</p>&#13;
<p><a href="http://www.english.upenn.edu/%7Emgamer/Teaching/241/syllabus1998.html">Sensibility and Its Discontents</a> (Michael Gamer, U Penn)</p>&#13;

<h3><a name="sublime" id="sublime"> </a>The Sublime</h3>&#13;
<p><a href="http://www.users.muohio.edu/mandellc/eng495/495syll.htm">The Sublime, the Beautiful, and the Picturesque in Eighteenth-Century England</a> (Laura Mandell, Miami U Ohio)</p>&#13;

<h3><a name="transatlantic" id="transatlantic"> </a>Transatlantic</h3>&#13;
<p><a href="http://www.users.muohio.edu/mandellc/eng710/PolAffectSyll.htm">The Politics of Affect</a> (Laura Mandell, Miami U Ohio; Lori Merish, Georgetown)</p>&#13;
<p><a href="http://www.users.muohio.edu/mandellc/eng710/transatlantic.htm">Transatlantic Sentimental Poetry: The Popular Poetess, 1770-1850</a> (Laura Mandell, Annie Finch, Miami U of Ohio)</p>&#13;
<h3><a name="trans" id="trans"> </a>Transromanticism: Romanticism and Topics from Other Disciplines or Historical Periods</h3>&#13;
<p><a href="http://www2.iath.virginia.edu/courses/ennc491/ennc491.html">Incarnate Textualities: Blake, Dickinson, D.G. Rossetti</a> (Jerome McGann, U Virginia)</p>&#13;
<p><a href="https://web.archive.org/web/20020604051332/http://icdweb.cc.purdue.edu/~felluga/medievalism.html">Nineteenth-Century Medievalism</a>* (Dino Felluga, Purdue U)</p>&#13;
<p><a href="https://web.archive.org/web/20020604053501/http://icdweb.cc.purdue.edu/~felluga/tech.html">Technology of the Book</a>* (Dino Felluga, Purdue U)</p>&#13;
<p><a href="https://web.archive.org/web/20060912135448/http://media.dickinson.edu/english/ww&hardy.html">Wordsworth and Hardy</a>* (Ashton Nichols, Dickinson C)</p>&#13;
<p><a href="http://lmc.gatech.edu/~broglio/1101/">Writing About Visionary Selves and Virtual Landscapes</a> (Ron S. Broglio, Georgia Institute of Technololgy)</p>&#13;

<h3><a name="women" id="women"> </a>Women Writers</h3>&#13;
<p><a href="https://web.archive.org/web/20100726113952/http://hal.ucr.edu/~cathy/syll/womwrit.html">British Women\'s Novels, 1782-1807</a> (Catherine Decker, Chaffy College)</p>&#13;

<h3><a name="pedagogical" id="pedagogical"> </a>Pedagogical Issues</h3>&#13;
<p><a href="http://lmc.gatech.edu/~broglio/eromantic/">Romantic Text/Electronic Text: Designing a New Pedagogical Practice for Romantic Studies</a> (Ron S. Broglio and Bill Ruegg, U Florida)</p>
'),
    t('term'),
    t('Uncategorized'),
    t('Page'),
    t('Feed'),
  );
  $export['online_syllabi'] = $view;

  return $export;
}
